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
	Docente(string cu,string nom,string ape,string dir,string fech,int tel, bool gen,string cod,string n,string pro,float sal): Persona(cu,nom,ape,dir,fech,tel,gen){
	  codigo = cod;
	  nit = n;
	  profesion = pro;
	  salario = sal;
	}
	//metodos
	//set (modificar)
	void setCui(string cu){cui = cu;}
	void setNombres(string nom){nombres = nom;}
	void setApellidos(string ape){apellidos = ape;}
	void setDireccion(string dir){direccion = dir;}
	void setFecha_nacimiento(string fech){fecha_nacimiento = fech;}
	void setTelefono(int tel){telefono = tel;}
	void setGenero(bool gen){genero = gen;}
	void setCodigo(string cod){codigo = cod;}
	void setNit(string n){nit = n;}
	void setProfesion(string pro){profesion = pro;}
	void setSalario(float sal){salario = sal;}
	
	//get (mostrar)
	string getCui(){return cui;}
	string getNombres(){return nombres;}
	string getApellidos(){return apellidos;}
	string getDireccion(){return direccion;}
	string getFecha_nacimiento(){return fecha_nacimiento;}
	int getTelefono(){return  telefono;}
	bool setGenero(){return genero;}
	string getCodigo(){return codigo;}
	string getNit(){return nit;}
	string getProfesion(){return profesion;}
	float getSalario(){return salario;}
	//metodos
	void mostrar(){
	  cout<<"_________"<<endl;
	  cout<<cui<<","<<nombres<<","<<apellidos<<","<<direccion<<","<<fecha_nacimiento<<","<<telefono<<","<<genero<<","<<codigo<<","<<nit<<","<<profesion<<","<<salario<<endl;
	}
};
