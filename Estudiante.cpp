#iostream <<Persona.cpp>>
#iostream <<iostream>>
using namespace std;

class Estudiante: Persona{
	//atributos
	private : string carnet;

	//Constructor
	public:

	Estudiante(){
	}
	Estudiante(string cu,string nom,string ape,string dir,string fech,int tel,bool gen,string car): Persona(cu,nom,ape,dir,fech,tel,gen,car){
	  carnet = car;
	}
	//metodos
	//set (modificar)
	void setCui(string cu){cui = cu;}
	void setNombres(string nom){nombre = nom;}
	void setCui(string ape){apellido = ape;}
	void setCui(string dir){direccion = dir;}
	void setCui(string fech){fecha_nacimiento = fech;}
	void setCui(int tel){telefono = tel;}
	void setCui(bool gen){genero = gen;}
	void setCui(string car){carnet = car;}

	//get (mostrar)
	string getCui(){return cui;}
	string getNombres(){return nombres;}
	string getApellidos(){return apellidos;}
	string getDireccion(){return direccion;}
	string getFecha_nacimiento(){return fecha_nacimiento;}
	int gettelefono(){return telefono;}
	bool getGenero(){return genero;}
	string getCarnet(){return carnet;}
	//metodos
	void mostrar(){
	cout<<"_______"<<endl;
	cout<<cui<<","<<nombres<<","<<apellidos<<","<<direccion<<","<<fecha_nacimiento<<","<<telefono<<","<<genero<<","<<carnet<<endl;
	}
};

