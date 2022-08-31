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
		Corrida c1("Interlagos- S�o Paulo, Brasil", 14, 71);	
	    c1.imprime();
	    cout << "\nTempo m�dio de dura��o da corrida: " << calcTempo(c1) << "h" << endl;
    }
	
	{//bloco limitador p1
	    Podio p1("Lewis Hamilton", "Mercedes", "W11", "Interlagos- S�o Paulo, Brasil", 14, 71);
		Perfil pf(13);

		Corrida *pc1;
	    pc1 = &p1;
	    pc1->imprime();
	   		
		cout << "\nN�mero de pontos do piloto na temporada: " << p1.calcPontos(pf) << endl;
	}
	
}
