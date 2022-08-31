#include <iostream>
#include <string>
#include "Podio.h"
#include "Perfil.h"

using namespace std;

Perfil::Perfil(int vit):vitorias(vit)
{
	
}

Perfil::~Perfil()
{
	cout << "\nFim de Perfil\n" << endl;
}

void Perfil::setVitorias(int vit)
{
	vitorias = vit;
}

int Perfil::getVitorias() const
{
	return vitorias;
}



