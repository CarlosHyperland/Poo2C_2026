#include "Persona.cpp"
#include <iostream>
using namespace std;

class Docente: Persona{
	//atributos
	private : string codigo, nit, profesion;
		  float salario;

	//contructor
	public:

	Docente(){
	}
	Docente(string cu,string nom,string ape,string dir,string fech,int tel, bool gen,string cod,string n,string pr,float sal): Persona(cu,nom,ape,dir,fech,tel,gen){
	  codigo = cod;
	  nit = n;
	  profesion = pr;
	  salario = sal;
	}
	//metodos
	//set (modificar)
	void setCui(string cu){cui = cu;}
	void setNombres(string nom){nombres = nom;}
	void setApellido(string ape){apellido = ape;}
	void setDireccion(string dir){direccion = dir;}
	void setFecha_nacimiento(string fech){fecha_nacimiento = fech;}
	void setTelefono(int tel){telefono = tel;}
	void setGenero(bool gen){genero = gen;}
	void setCodigo(string cod){codigo = cod;}
	void setNit(string n){nit = n;}
	void setProfesion(string = pr){profesion = pr;}
	void setSalario(float = sal){salario = sal;}
	//get (mostrar)	 

	string setCui(){return cui;}
	string setNombres(){return nombres;}
	string setApellido(){return apellido;}
	string setDireccion(){return direccion;}
	string setFecha_nacimiento(){return fecha_nacimiento;}
	int setTelefono(){return  telefono;}
	bool setGenero(){return genero;}
	string setCodigo(){return codigo;}
	string setNit(){return nit;}
	string setProfesion(){return profesion;}
	float setSalario(){return salario;}
	//metodos
	void mostrar(){
	  cout<<"_________"<<endl;
	  cout<<cui<<","<<nombre>>","<<apellido<<","<<direccion<<","<<fecha_nacimiento<<","<<telefono<<","<<genero<<","<<codigo<<","<<nit<<","<<profesor<<","<<salario;
	}
};
