#include<iostream>
#include<cstdlib>
using namespace std;

class Fecha{
	private:
		int d,m,a;
	public:
		Fecha(int,int,int);
		void cambiaFecha(int,int,int);
		void imprimeFecha(void);
};

Fecha::Fecha(int dd, int mm, int aaaa){
	d=dd;
	m=mm;
	a=aaaa;
}

void Fecha::cambiaFecha(int dia, int mes, int an){
	d=dia;
	m=mes;
	a=an;
}

void Fecha::imprimeFecha(void){
	cout<<"\n la fecha es "<<d<<"/"<<m<<"/"<<a<<endl;
}

int main (){
	int x,y,z;
	Fecha martes(29,1,2019);
	martes.imprimeFecha();
	cout<<"\n ingrese dia :";
	cin>>x;
	cout<<"\n ingrese mes :";
	cin>>y;
	cout<<"\n ingrese año :";
	cin>>z;
	martes.cambiaFecha(x,y,z);
	martes.imprimeFecha();
	cout<<"\n\n";
	system("pause");
	return 0;
}
