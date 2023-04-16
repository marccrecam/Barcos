// Barcos.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#pragma once
#include "Barcos.h"
#include <iostream>
using namespace std;
//Constructor
Barcos::Barcos(int pVel, int pDistancia, int pNitro, std::string pName) {
	vel = pVel;
	distancia = pDistancia;
	nitro = pNitro;
	name = pName;
}

//Getters
int Barcos::getVel() {
	return vel;
}

int Barcos::getDistancia() {
	return distancia;
}

int Barcos::getNitro() {
	return nitro;
}

std::string Barcos::getName() {
	return name;
}

//Setters
int Barcos::setVel(int pVel) {
	return vel = pVel;
}

int Barcos::setDistancia(int pDistancia) {
	return distancia = pDistancia;
}

int Barcos::setNitro(int pNitro) {
	return nitro = pNitro;
}



//Metodos propios
int Barcos::velActual(int pVel, int dado) {
	pVel = pVel + dado;
	Barcos::setVel(pVel);
	return pVel;
}

void Barcos::usoNitro(int elec, int dadoNitro) {
	if (getNitro() == 1) {
		cout << "Quieres usar el nitro\n[1]SI \n[0]NO\nTe queda: " << getNitro() << " nitro restante" << endl;
		cin >> elec;
		if (elec == 1)
		{
			int pNitro = 0;
			Barcos::setNitro(pNitro);
			if (dadoNitro == 1) {
				setVel(getVel() * 2);
				cout << "Nitro correcto " << getName() << " duplica la velocidad  y pasa a tener una velocidad de:" << getVel() << endl;
			}
			else {
				setVel(getVel() / 2);
				cout << "Nitro incorrecto, " << getName() << "su velocidad se divide en 2 y pasa a tener una velocidad de: " << getVel() << endl;
			}
		}
	}

}

int Barcos::distanciaRecorrida() {
	return setDistancia(getDistancia() + getVel() * 100);
}

void Barcos::lDistancia() {
	cout << "Distancia recorrida " << getName() << ": [";

	for (size_t i = 0; i < getDistancia() / 100; i++)
	{
		cout << "+";
	}

	cout << "] " << getDistancia() << "m " << endl;
}