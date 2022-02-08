/*1/02/20200
Bryan Garavito 
Computacion paralela y distribuida
Presentacion de tipo de datos disponibles en c++ */


/* Se declaran las interfaces*/
#include <iostream>

/* Definicion funcion lamnda para calculos de bites*/
#define SIZEBITES(X) sizeof(x)*8

/* Se declara el espacio del dominio*/
using namespace std;

int main(){
	cout<<"============================================================================================================="<<endl;
	cout<<"|Type		|	Meaning							|	Bytes						|	Bites						|"<<endl;
	cout<<"============================================================================================================="<<endl;
	cout<<"|Bool		|	Boolean							|	"<<sizeof(bool)<< "			|	"<<SIZEBITE(bool)<<"		|	"<<endl;
	cout<<"|Char		|	Character						|	"<<sizeof(char)<< "			|	"<<SIZEBITE(char)<<"		|	"<<endl;
	cout<<"|wchar_t		|	Wide Character					|	"<<sizeof(wchar_t)<< "		|	"<<SIZEBITE(wchar_t)<<"		|	"<<endl;
	cout<<"|char16_t	|	Unicode Character				|	"<<sizeof(char16_t)<< "		|	"<<SIZEBITE(char16_t)<<"	|	"<<endl;
	cout<<"|char32_t	|	Unicode Character				|	"<<sizeof(char32_t)<< "		|	"<<SIZEBITE(char32_t)<<"	|	"<<endl;
	cout<<"|short		|	Short Integer					|	"<<sizeof(short)<< "		|	"<<SIZEBITE(short)<<"		|	"<<endl;
	cout<<"|int			|	Integer							|	"<<sizeof(int)<< "			|	"<<SIZEBITE(int)<<"			|	"<<endl;
	cout<<"|long		|	Long Integer					|	"<<sizeof(long)<< "			|	"<<SIZEBITE(long)<<"		|	"<<endl;
	cout<<"|long long 	|	Long long Integer				|	"<<sizeof(long long)<< "	|	"<<SIZEBITE(long long)<<"	|	"<<endl;
	cout<<"|float		|	Single Precision floating ponit	|	"<<sizeof(float)<< "		|	"<<SIZEBITE(float)<<"		|	"<<endl;
	cout<<"|double		|	Double Precision floating ponit	|	"<<sizeof(double)<< "		|	"<<SIZEBITE(double)<<"		|	"<<endl;
	cout<<"|long double	|	Extend Precision floating ponit	|	"<<sizeof(long double )<< "|	"<<SIZEBITE(long double)<<"	|	"<<endl;
	
}
