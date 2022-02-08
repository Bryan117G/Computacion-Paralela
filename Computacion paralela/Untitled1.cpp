/*1/02/20200
Bryan Garavito 
Computacion paralela y distribuida
Mini Benchmark(Aplicacion para medir rendimiento ) */

/* Se declaran las interfaces*/
#include <iostream>

/* Se declara el espacio del dominio*/
using namespace std;

/* Se define una constante*/
#define size 32768

/*loop para determinar el tiempo de acceso de datos*/

int main(void) {
	int matrix[size][size];
	for(int i = 0; i<size; i++) {
		for(int j = 0; j<size; j++) {
			matrix[i][j] = 47;
		}
	}
return 0;
}

