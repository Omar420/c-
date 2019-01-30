#include<iostream>
#include <string>
#include "Empleado.h"
#include "Fecha.h"
using namespace std;

int main(){
	Fecha hoy(30,1,2019);
	hoy.getFecha();
	Fecha ayer(20190129);
	ayer.getFecha();
	Tiempo horaActual(11,20,50);
	horaActual.getTiempo();
	Tiempo hace1Hora(45410);
	hace1Hora.getTiempo();
	
	
	Empleado cajero("jose",4444,20,"b40","cajero");
	cajero.getDatos();
	cajero.~Empleado();
	
	system("pause");
	return 0;
}
