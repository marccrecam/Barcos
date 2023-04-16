#pragma once
#include  <iostream>

	
	using namespace std;

	class Barcos
	{
	private:
		int vel;
		int distancia;
		int nitro;
		string name;
	public:

		//Constructor

		Barcos(int pVel, int pDistancia, int pNitro, std::string pName);

		//Getters

		int getVel();

		int getDistancia();

		int getNitro();

		std::string getName();

		//Setters

		int setVel(int pVel);

		int setDistancia(int pDistancia);

		int setNitro(int pNitro);

		string setName(std::string pName);

		//Metodos propios

		int velActual(int pVel, int pDado);

		void usoNitro(int pelec, int pdadoNitro);

		int distanciaRecorrida();

		void lDistancia();
	};
	


	



