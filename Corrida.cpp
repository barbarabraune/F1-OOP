#include <iostream>
#include <string>
#include "Corrida.h"

using namespace std;

Corrida::Corrida(string l, int h, int v):local(l), horario(h), voltas(v)
{
}

Corrida::~Corrida()
{
	cout << "\nFim de Corrida\n" << endl;
}

void Corrida::setLocal(string l)
{
	local = l;
}

string Corrida::getLocal() const
{
	return local;
}

void Corrida::setHorario(int h)
{
	horario = h;
}

int Corrida::getHorario() const
{
	return horario;
}

void Corrida::setVoltas(int v)
{
	voltas = v;
}

int Corrida::getVoltas() const
{
	return voltas;
}

void Corrida::imprime() const
{
	cout << "\nDADOS DA CORRIDA\n"
	     << "\nLocal: " << getLocal()
	     << "\tHorario: " << getHorario()
	     << "\tNumero de voltas: " << getVoltas()
	     << endl;
}
