#include <iostream>

using namespace std;

class Fecha{
	private:
		int dia,mes,ano;
	public:
		Fecha(int,int,int);//constructor 1
		Fecha(long);//costructor 2
		void getFecha();
};

class Tiempo{
	private:
		int horas, minutos, segundos;
	public:
		Tiempo(int,int,int);//costructor 1
		Tiempo(int);//costructor 2
		void getTiempo();
};
