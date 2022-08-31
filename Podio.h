#ifndef PODIO_H
#define PODIO_H

#include <iostream>
#include <string>
#include "Corrida.h"
#include "Perfil.h"

using namespace std;

class Podio:public Corrida
{
	private:
		const string vencedor;
		const string equipe;
		const string carro;
	public:
		Podio(string, string, string, string, int, int);
		~Podio();
		virtual void imprime() const;
		//void setVencedor(string);
		string getVencedor() const;
		//void setEquipe(string);
		string getEquipe() const;
		//void setCarro(string);
		string getCarro() const;
		int calcPontos(Perfil);
};
#endif
