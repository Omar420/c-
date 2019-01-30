#include <string>
using namespace std;

class Persona{
	private:
		string nombre;
		int cedula, edad;
	public:
		Persona(string, int, int);
		void getPersona();
	
};

class Empleado : public Persona{
	private:
		string codigoEmpleado;
		string cargo;
	public:
		Empleado(string, int, int, string, string);
		~Empleado();
		void setDatos(string, int, int, int, string, string);
		void getDatos();
};

