#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int numero;
	
	cout<<"Digite un numero: "; 
	cin>>numero;
	
	cout<<"\nDescomponiendo en factores primos: \n";
	for(int i=2;numero>1;i++){
		while(numero%i==0){
			cout<<i<<"\n";
			numero /= i;
		}
	}
	
	cout<<"\n";
	system("pause");
	return 0;
}