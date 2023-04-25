# include <iostream>

//using namespace std;

int main()
{
	int	edad, *dir_edad;
	dir_edad = &edad;

	std::cout<<"que edad tienes?\n";
	std::cin>>edad;
	std::cout<<"Su edad es: "<<edad; 
	std::cout<<" años.\n"<<std::endl;

	std::cout<<"El valor de su edad es: "<<*dir_edad<<std::endl;
	std::cout<<"El valor de la direccion su edad es: "<<dir_edad<<std::endl;


	return 0;
}