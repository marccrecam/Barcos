#include <iostream>
#include "Barcos.h"
#include <time.h>
#include <Windows.h>
#include <stdlib.h>

//Variables
int dado;
int dNitro;
int choose;

int tirarDado() {
	//Dado que tiene la funcion de sacar la velocidad de los barcos
	return dado = rand() % (7 - 1) + 1;
}

int tirarNitro() {
	//Dado que tiene la funcion de determinar si el nitro se activa o no se activa
	return dNitro = rand() % 2;
}

void main() {
	srand(time(NULL));

	//Contructor de los barcos

	Barcos barco1(0, 0, 1, "Lancha");
	Barcos barco2(0, 0, 1, "Velero");

	//Codigo de nuestro proyecto
	for (size_t i = 1; i <= 5; i++) {

		//Hacemos una repesentacion grafica de como va la distancia recorrida en cada turno

		barco1.lDistancia();
		barco2.lDistancia();

		cout << "\n";


		cout << "Estamos en el turno: " << (i) << "\n" << endl;

		//Funciones para la velocidad y distancia de la lancha

		cout << "La " << barco1.getName() << " aumenta su velocidad por " << tirarDado() << " puntos" << endl;
		Sleep(2000);
		cout << "La velocidad de la " << barco1.getName() << " es: " << barco1.velActual(barco1.getVel(), dado);
		cout << "\nLa distancia recorrida por la "<< barco1.getName() << " es: " << barco1.distanciaRecorrida() << " m" << endl;
		Sleep(2000);
		//Funcion para que usemos el nitro
		barco1.usoNitro(choose, tirarNitro());

		//Funciones para la velocidad y distancia del velero

		cout << "\nEl " << barco2.getName() << " aumenta su velocidad por " << tirarDado() << " puntos" << endl;
		Sleep(2000);
		cout << "La velocidad del " << barco2.getName() << " es: " << barco2.velActual(barco2.getVel(), dado);
		cout << " La distancia recorrida por el "<<barco2.getName()<< " es: " << barco2.distanciaRecorrida() << " m" << endl;
		cout << "\n";
		Sleep(2000);
		//Funcion para que usemos el nitro
		barco2.usoNitro(choose, tirarNitro());
		system("cls");
	}

	//Hacemos una repesentacion grafica de como va la distancia recorrida en cada turno

	barco1.lDistancia();
	barco2.lDistancia();
	cout << "\n";

	if (barco1.getDistancia() > barco2.getDistancia()) {
		cout << "Tu barco ha ganado la carrera";
	}
	else if (barco1.getDistancia() < barco2.getDistancia()) {
		cout << "El barco rival ha ganado la carrera";
	}
	else if (barco1.getDistancia() == barco2.getDistancia()) {
		cout << "Ha habido un empate";
	}

}