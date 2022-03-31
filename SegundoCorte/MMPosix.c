/*****************************************
 * Fecha 15-03-2022
 * Autor: Bryan Garavito
 * Materia: Computación Paralela y Distribuida
 * Tema: Implementación Posix (LIbrary)
*****************************************/

#include "modulo.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <pthread.h>
#include <sys/time.h>
#include <omp.h>


 /*A continuacion se crea una estructura de datos 
 para ser enviada como argumentos a la funcion de multiplicacion de matrices 
 implementada con la biblioteca posix*/ 

typedef struct argHilos{
	int idThread;
	int size;
	int nThread;
	double **a,**b,**c;
} structHilos;


void *multMM(void *argThreads){
	int i, j, k;
	int porcionSize, iniFila, finFila;
	double suma;
	int idTH = ((structHilos*)argThreads) -> idThread;
	int sizeTH = ((structHilos*)argThreads) -> size;
	int nThreadTH = ((structHilos*)argThreads) -> nThread;
	int **MA = ((structHilos*) argThreads) -> a
	int **MB = ((structHilos*) argThreads) -> b;
	int **MC = ((structHilos*) argThreads) -> c;
	
	/*Se determina la porcion a ser enviada a cada hilo */
	porcionSize = sizeTH/Nthreads;
	/*Se pasa el inicio de fila, según el Id del hilo */
	iniFila = idTh*porcionSize;
	/*Se pasa el fin de fila, según el Id del hilo */
	finFila =(idTh+1)*porcionSize;
	
	for(i = iniFila; i <finFila; ++i){
		for(j = 0; j <sizeTH; ++j){
			suma = 0.0;
			for(k = 0; k <sizeTH; ++k){
				suma += MA[i][k] * MB[k][j];
			}
			MC[i][j] = suma;
		}
	}
	
	pthread exit(NULL);
}

int main(int argc, char* argv[]){

	if(argc !=3){
		printf("./Exe N<dimMatriz> Nth<numHilos> \n\n");
		return -1;
	}

	/* Se capturan las variables size y número de hilos */
	int N 	 = atof(argv[1]);
	int Nthreads = atof(argv[2]);
	
	/**Se valida que el numero de hilos ingresados sea menor o igual al numero de cores determinados por el sistema operativo */
	if(nThead>omp_get_max_threads()){
		printf("El numero de hilos debe ser <= ",omp_get_max_threads());
		return-1;
	}
	
	/*Se crea un vector de argumento*/
	structHilos argThreads[Nthreads];
	
	/* Se crea el pool de hilos */
	pthread_t *hilosExec;
	/*Se reserva memoria para los hilos*/
	hilosExec = (pthread_t *)malloc(Nthreads *sizeof(pthread_t));
	
	
	
	/* Creación y reserva de Mem para cada Matriz */
	double **Ma = ReservaMEM(N);
	double **Mb = ReservaMEM(N);
	double **Mc = ReservaMEM(N);

	IniciarMatriz(Ma,Mb,Mc,N);
	
	printMatrizH(Ma,N);	
	printMatrizH(Mb,N);
	
	
	sampleStart();
	/*Se reparte la tarea a cada hilo ,al usar la función
	* funcion pthread_create(&tinfo[tnum].thread_id,&attr,
				  &thread_start,&tinfo[tnum]); */
	for (int i = 0; i < Nthreads; ++i){
		arg_hilos[i].idThread=idTH;
		arg_hilos[i].size=nThreadTH;
		arg_hilos[i].nThread=nThreadTH;
		arg_hilos[i].a=MA;
		arg_hilos[i].b=MB;
		arg_hilos[i].c=MC;
        	pthread_create(&hilosExec[i], NULL, multMM, &arg_hilos[i]);
    	}
    
	/*Espero a que todos los hilos terminen */

	for(int i=0; i <Nthreads; ++i){
		pthread_join(hilosExec[i], NULL);
	}
	
	if(N < 4){
		printf("Matriz C \n");
		printMatrizH(Mc,N);
	}
	sampleEnd();
	free(hilosExec);
	return EXIT_SUCCES;
}


