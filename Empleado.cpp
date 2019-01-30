#include <iostream>
#include <string>
#include "Empleado.h"
using namespace std;

Persona::Persona(string nombre1, int cedula1, int edad1){
	nombre=nombre1;
	cedula=cedula1;
	edad=edad1;
}

void Persona::getPersona(){
	cout<<"Nombre:"<<nombre<<endl;
	cout<<"cedula:"<<cedula<<endl;
	cout<<"edad  :"<<edad<<endl;
}

Empleado::Empleado(string nombre1, int cedula1, int edad1, string codigoEmpleado1, string cargo1) : Persona(nombre1, cedula1, edad1){
	codigoEmpleado=codigoEmpleado1;
	cargo=cargo1;
}

Empleado::~Empleado(){
}

void Empleado::getDatos(){
	getPersona();
	cout<<"Codigo:"<<codigoEmpleado<<endl;
	cout<<"Cargo :"<<cargo<<endl;
	
}

