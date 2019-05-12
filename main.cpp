#include <iostream>
#include <cstring>
#include <math.h>
#include <cstdlib>
#include "Librerias.h"

using namespace std;

int main(){
	int opcion=0, salir=0;
	float velocidad=0, posicion=0, tiempo=0, V1=0, V2=0, M1=0, M2=0, altura=0, friccion=0, radio=0;
	double angulo=0;
	while(salir==0){
		cout<<"\n\t\t\t\t\t SELECCIONE UNA DE LAS OPCIONES."<<endl;
		cout<<"\n\t\t\t\t 1. Movimiento parabolico."<<endl;
		cout<<"\t\t\t\t 2. Choque elastico."<<endl;
		cout<<"\t\t\t\t 3. Rebote de particulas."<<endl;
		cout<<"\t\t\t\t 4. Salir."<<endl;
		cout<<"\n\t\t\t\t\t\t Opcion: "; cin>>opcion;
		
		switch(opcion){
			case 1: cout<<"\nIngrese la friccion del medio: "; cin>>friccion;
					if (friccion == 0)
					{
						cout<<"\nIngrese la velocidad inicial: "; cin>>velocidad;
						cout<<"\nIngrese la Posicion inicial en el eje Y: "; cin>>posicion;
						cout<<"\nIngrese el angulo de lanzamiento: "; cin>>angulo;
						cout<<"\nIngrese el tiempo de recorrido de la particula: "; cin>>tiempo;
						MovParabolico(velocidad,posicion,angulo,tiempo);
					}
					else
					{
						cout<<"\nIngrese la velocidad inicial: "; cin>>velocidad;
						cout<<"\nIngrese la Posicion inicial en el eje Y: "; cin>>posicion;
						cout<<"\nIngrese el angulo de lanzamiento: "; cin>>angulo;
						cout<<"\nIngrese el tiempo de recorrido de la particula: "; cin>>tiempo;
						cout<<"\nIngrese el radio del objeto: "; cin>>radio;
						cout<<"\nIngrese la masa del objeto: "; cin>>M1;
						MovParabolicoFricc(velocidad, posicion, angulo, tiempo, friccion, radio, M1);
					}
					continue;
					
			case 2: cout<<"\nIngrese la velocidad de la masa 1: "; cin>>V1;
					cout<<"\nIngrese la velocidad de la masa 2: "; cin>>V2;
					cout<<"\nIngrese la masa 1: "; cin>>M1;
					cout<<"\nIngrese la masa 2: "; cin>>M2;
					ChoqueElastico(V1, V2, M1, M2);
					continue;
					
			case 3: cout<<"\nIngrese la altura desde donde se lanzara la particula: "; cin>>altura;
					cout<<"\nIngrese la masa del objeto: "; cin>>M1;
					Rebotes(altura, M1);
					continue;
					
			case 4: cout<<"\n\t\t\t\t\t\tVUELVA PRONTO"<<endl;
					salir=1;	
		}
		system("Pause");
		return 0;
	}
}
