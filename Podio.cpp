#include <iostream>
#include <string>
#include "Corrida.h"
#include "Podio.h"
#include "Perfil.h"

using namespace std;

Podio::Podio(string venc, string e, string c, string l, int h, int v):Corrida(l, h, v), vencedor(venc), equipe(e), carro(c)
{
	
}

Podio::~Podio()
{
	cout << "\nFim de Podio\n" << endl;
}

/*void Podio::setVencedor(string venc)
{
	vencedor = venc;
}*/

string Podio::getVencedor() const
{
	return vencedor;
}

/*void Podio::setEquipe(string e)
{
	equipe = e;
}*/

string Podio::getEquipe() const
{
	return equipe;
}

/*void Podio::setCarro(string c)
{
	carro = c;
}*/

string Podio::getCarro() const
{
	return carro;
}

int Podio::calcPontos(Perfil p)
{
	
	return p.vitorias * 25;
}

void Podio::imprime() const
{
	cout << "\nDADOS DO VENCEDOR\n"
	     << "\nNome: " << getVencedor()
	     << "\tEquipe: " << getEquipe()
	     << "\tCarro: " << getCarro()
         << endl;
}

