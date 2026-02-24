#include <iostream>
#include "Persona.cpp"

using namespace std;

class Estudiante: Public Persona{
	//atributos
	private : string carnet;

	//Constructor
	public:

	Estudiante(){
	}
	Estudiante(string cu,string nom,string ape,string dir,string fech,int tel,bool gen,string car): Persona(cu,nom,ape,dir,fech,tel,gen){
	  carnet = car;
	}
	//metodos
	//set (modificar)
	void setCarnet(string car){carnet = car;}

	//get (mostrar)
	string getCarnet(){return carnet;}
	//metodos
	void mostrar(){
	cout<<"_______"<<endl;
	cout<<cui<<","<<nombres<<","<<apellidos<<","<<direccion<<","<<fecha_nacimiento<<","<<telefono<<","<<genero<<","<<carnet<<endl;
	}
};

