/*1/02/20200
Bryan Garavito 
Computacion paralela y distribuida
Presentacion de tipo de datos disponibles en c++ */


/* Se declaran las interfaces*/
#include <iostream>

/* Definicion funcion lamnda para calculos de bites*/
#define SIZEBITES(X) sizeof(X)*8

/* Se declara el espacio del dominio*/
using namespace std;

int main(){
	cout<<"============================================================================================================="<<endl;
	cout<<"|Type	|	Meaning	|	Bytes	|	Bites	|"<<endl;
	cout<<"============================================================================================================="<<endl;
	cout<<"|Bool	|	Boolean|	"<<sizeof(bool)<< "|"<<SIZEBITES(bool)<<"|"<<endl;
	cout<<"|Char	|	Character	|	"<<sizeof(char)<< "|"<<SIZEBITES(char)<<"|"<<endl;
	cout<<"|wchar_t	|	Wide Character	|	"<<sizeof(wchar_t)<< "|"<<SIZEBITES(wchar_t)<<"|"<<endl;
	cout<<"|char16_t	|	Unicode Character	|	"<<sizeof(char16_t)<< "|"<<SIZEBITES(char16_t)<<"|"<<endl;
	cout<<"|char32_t	|	Unicode Character	|	"<<sizeof(char32_t)<< "|"<<SIZEBITES(char32_t)<<"|"<<endl;
	cout<<"|short	|	Short Integer	|	"<<sizeof(short)<< "|"<<SIZEBITES(short)<<"|"<<endl;
	cout<<"|int	|	Integer	|	"<<sizeof(int)<< "|"<<SIZEBITES(int)<<"|"<<endl;
	cout<<"|long	|	Long Integer|	"<<sizeof(long)<< "|"<<SIZEBITES(long)<<"|"<<endl;
	cout<<"|long long	|	Long long Integer|	"<<sizeof(long long)<< "|"<<SIZEBITES(long long)<<"|"<<endl;
	cout<<"|float	|	Single Precision floating ponit	|"<<sizeof(float)<< "|"<<SIZEBITES(float)<<"|"<<endl;
	cout<<"|double	|	Double Precision floating ponit	|"<<sizeof(double)<< "|"<<SIZEBITES(double)<<"|"<<endl;
	cout<<"|long double	|	Extend Precision floating ponit	|"<<sizeof(long double )<< "|"<<SIZEBITES(long double)<<"|"<<endl;
	
}
