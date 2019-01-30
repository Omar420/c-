#include <iostream>
#include <string>
#include "Fecha.h"
using namespace std;

//costructor
Fecha::Fecha(int dia1, int mes1, int ano1){
	dia=dia1;
	mes=mes1;
	ano=ano1;
}
//sobre carga
Fecha::Fecha(long fecha){
	ano=int(fecha/10000);//año
	mes=int((fecha-ano*10000)/100);//mes
	dia=int(fecha-ano*10000-mes*100);//dia
}

void Fecha::getFecha(){
	cout<<"Fecha"<<"\n"<<dia<<"/"<<mes<<"/"<<ano<<endl;
	
}
//costructor
Tiempo::Tiempo(int horas1, int minutos1, int segundos1){
	horas=horas1;
	minutos=minutos1;
	segundos=segundos1;
}
//sobre carga
Tiempo::Tiempo(int tiempoSeg){
	horas=tiempoSeg/3600;//extraer horas
	tiempoSeg%=3600;
	minutos=tiempoSeg/60;//extraer minutos
	segundos=tiempoSeg%60;
}

void Tiempo::getTiempo(){
	cout<<"la hora es: "<<horas<<":"<<minutos<<":"<<segundos<<endl;
}

