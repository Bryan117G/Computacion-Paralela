/*
Bryan Steven Garavito Gonzalez 
Computacion paralela y dsitribuida 
Construccion del primer Benchmark
Aplicacion de juguete que permite evaluar rendimiento de un aspecto en especifico de la computadora
*/


#include <iostream>
#include <vector>
#include <random>
#include <ctime>
#include <cstdlib>
using namespace std;

/*Se requiere inicializar una matriz con numero aleatorios 
vector<vector<double>> InicializacionMatriz(vector<vector<double>> M){
	int i,j;
	float limInf = 0.001, limSup=9.999;
	vector<vector< double>> Minicializada(M.size(), vector<double> (M.size(),0));
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<> dis(limInf, limSup);
	
	for(int i=0;i<M.size();i++){
		for(int j=0;j<M.size();j++){
			Minicializada[i][j] = dis(gen);
		}
	}
	return Minicializada;
}*/



/**
* Function that multiplies two matrixes
* @param Ma that is the A matrix
* @param Mb that is the B matrix
* @return The matrix product between Ma and Mb
*/
vector<vector<double>> multiMatrix(vector<vector<double>> Ma, vector<vector<double>> Mb){
	vector<vector<double>> MResult(Ma.size(),vector<double>(Ma.size(),0));
	for(int i=0;i<Ma.size();i++){
		for(int j=0;j<Ma.size();j++){
			for(int k=0;k<Ma.size();k++){
				MResult[i][j]+=Ma[i][k]*Mb[k][j];
			}
		}
	}
	return MResult;
}
/**
 * @brief Function that generates a random value 
 * 
 * @param fMin that is the lower limit of the random value
 * @param fMax that is the higher limit of the random value
 * @return a double value between fMin and fMax 
 */
double randomNumber(double fMin, double fMax){
    double f = (double)rand() / RAND_MAX;
    return fMin + f * (fMax - fMin);
}
/**
 * Function that generates a matrix with truly random values
 * @param N that is the size of the matrix
 * @return a matrix with random values
 */
vector<vector<double>> generateMatrix(int N){
	vector<vector<double>> M(N,vector<double>(N,0));
	double lower_bound=0.001, upper_bound=9.999;
	//default_random_engine generator;
	//uniform_real_distribution<double> distribution(lower_bound,upper_bound);
	
	for(int i=0;i<M.size();i++){
		for(int j=0;j<M.size();j++){
			M[i][j]=randomNumber(lower_bound,upper_bound);
		}
	}
	return M;
}

/**
 * Function that prints in console a matrix
 * @param M that its the matrix will be printed
 */

void printMatrix(vector<vector<double>> M){
	for(int i=0;i<M.size();i++){
		for(int j=0;j<M.size();j++){
			cout<<M[i][j]<<" ";
		}
		cout<<endl;
	}

}

/**
* Main function
* @param argc that is the number of arguments
* @param argv that is a vector with the arguments
*/
int main (int argc, char** argv){
	srand(time(NULL));
	int i,j,k;
	int N=atoi(argv[1]);
	/*It is used the vector class to create the matrixes*/
	cout<< "N�mero ingresado: "<<N<<endl;
	vector<vector<double>> M1(N,vector<double>(N,0));
	vector<vector<double>> M2(N,vector<double>(N,0));
	vector<vector<double>> MR(N,vector<double>(N,0));
	M1=generateMatrix(N);
	M2=generateMatrix(N);
	//Se imprime M1
	cout<<"Se imprime M1"<<endl;
	printMatrix(M1);
	cout<<endl<<endl<<endl;
	//Se imprime M2
	cout<<"Se imprime M2"<<endl;
	printMatrix(M2);
	cout<<endl<<endl<<endl;
	MR=multiMatrix(M1,M2);
	//Se imprime MR
	cout<<"Se imprime MR"<<endl;
	cout<<endl<<endl<<endl;
	printMatrix(MR);
	
		
}
