#include <iostream>
using namespace std;
class Persona{
	//atributos
	protected : string cui, nombres, apellidos,direccion,fecha_nacimiento;
		  int telefono;
		  bool genero;
		  
	//contructor
	protected :
		  Persona(){
		  }
		  Persona(string cu, string nom, string ape, string dir, string fech,int tel,bool gen){
			cui = cu;
			nombres = nom;
			apellidos, ape;
			direccion = dir;
			telefono = tel;
			fecha_nacimiento; fech;
			genero = gen;

		  }
	//metodo (CRUD)
	void crea();
	void leer();
	void actulizar();
	void borrar();
};
