#include<iostream>
#include<stdlib.h>

class Persona{
	private:					//Atributos
		int     edad;
		std::string  nombre;

	public:						//Metodos
		Persona (int, std::string);	//Metodo constructor
		void	leer();
		void	correr();
};

Persona::Persona(int _edad, std::string _nombre){		//Inicializar metodo constructor
	edad = _edad;
	nombre = _nombre;
}

void	Persona::leer(){							//Inicializar metodo leer
	std::cout<<"Soy "<<nombre<<" tengo "<<edad<<" años y estoy leyendo un libro."<<std::endl;
}

void	Persona::correr(){							//Inicializar metod correr
	std::cout<<"Soy "<<nombre<<" y estoy corriendo un maraton."<<std::endl;
}

int	main(){
	Persona	p1 = Persona(53, "Joaquin");
	Persona	p2(18, "Lucia");
	Persona	p3(14, "Elsa");

	p1.leer();
	p2.correr();
	p3.leer();
	p3.correr();




	return 0;
}