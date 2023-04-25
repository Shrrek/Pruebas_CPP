#include<iostream>

using namespace std;

int main()
{
	float	numerador;
	float	denominador;
	float	resultado;

	cout<<"Introduce el numerador. \n";
	cin>>numerador;
	cout<<"Introduce el denominador. \n";
	cin>>denominador;
	resultado = (numerador / denominador) + 1;
	cout.precision(3);
	cout<<"El resultado es: "<<resultado<<endl;


	return 0;
}