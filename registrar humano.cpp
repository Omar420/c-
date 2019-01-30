#include<iostream>
#include<stdlib.h>
using namespace std;

class Humano{
	private:
		char nombre;
		int cedula, edad, ingreso;
	public:
		Humano(char, int, int, int);
		void cambiarHumano(char, int, int, int);
		void imprimirHumano(void);
};

Humano::Humano(char _nombre, int _cedula, int _edad, int _ingreso){
	nombre=_nombre;
	cedula=_cedula;
	edad=_edad;
	ingreso=_ingreso;
}

void Humano::cambiarHumano(char nombre1, int cedula1, int edad1, int ingreso1){
	nombre=nombre1;
	cedula=cedula1;
	edad=edad1;
	ingreso=ingreso1;
}

void Humano::imprimirHumano(void){
	cout<<"Nombre:"<<nombre<<"\nCedula:"<<cedula<<"\nEdad:"<<edad<<"\nIngreso:"<<ingreso<<endl;
	
}

void portada();
void ingreso();
void menu();
void opcion1();

int main(){
	portada();
	system("pause");
	return 0;
	
}

void portada(){
	int opcion;
	printf("%125s","______________\n");
	printf("%125s","| Bienvenido |\n");
	printf("%126s","--------------\n");
	printf("%132s","Calculo De Ingreso Familiar\n");
	printf("%127s","Desea Continuar?\n\n");
	printf("%20s %37s","1) SI","2) NO\n");
	cin>>opcion;
	switch(opcion){
		case 1:
			menu();     break;
		case 2:
			system("cls");
			cout << "gracias por usar el programa =>";  break;
	}
}

void ingreso(){
	system("cls");
	int cd, ed, in;
	char nb;
	Humano ig1(44,2,3,4);
	ig1.imprimirHumano();
	cout<<" 	Ingresar Nombre:";
	cin>>nb;
	cout<<"\n 	Ingresar Cedula:";
	cin>>cd;
	cout<<"\n 	Ingresar Edad:";
	cin>>ed;
	cout<<"\n 	Ingresar Ingresos:";
	cin>>in;
	ig1.cambiarHumano(nb, cd, ed, in);
	ig1.imprimirHumano();
}

void menu(){
	int opcion;
	system("cls");
	printf ("\t\n %40s","Menu\n\n\n");
	cout<<"Ingresar Opcion"<<endl<<endl;
	cout<<"1=> ingresar Datos "<<endl;
/*	cout<<"2=> Mostrar Datos "<<endl;
 	cout<<"3=> Guardar En Archivo "<<endl;
	cout<<"4=> Mostrar Datos Del Archivo "<<endl;
	cout<<"5=> salir "<<endl;*/
	cin>>opcion;
    opcion1();
}
void opcion1(){
	int opcionn;
		switch(opcionn){
			case 1:
				ingreso();     break;
		/*	case 2:
				salida();             break;
			case 3:
				archivo_entrada();    break;
			case 4:
				archivo_salida();     break;
			case 5:
				system("cls");
				printf("%20s","Gracias Por Usar El Programa Bye =)");   break;
		}*/
}
}
