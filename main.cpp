#include <iostream>
#include <string>
#include "Corrida.h"
#include "Podio.h"
#include "Perfil.h"

using namespace std;

float calcTempo(Corrida cor)
{
	return cor.voltas*0.02;
}

int main()
{
	
	{//bloco limitador c1
		Corrida c1("Interlagos- São Paulo, Brasil", 14, 71);	
	    c1.imprime();
	    cout << "\nTempo médio de duração da corrida: " << calcTempo(c1) << "h" << endl;
    }
	
	{//bloco limitador p1
	    Podio p1("Lewis Hamilton", "Mercedes", "W11", "Interlagos- São Paulo, Brasil", 14, 71);
		Perfil pf(13);

		Corrida *pc1;
	    pc1 = &p1;
	    pc1->imprime();
	   		
		cout << "\nNúmero de pontos do piloto na temporada: " << p1.calcPontos(pf) << endl;
	}
	
}
