#ifndef CORRIDA_H
#define CORRIDA_H

#include <iostream>
#include <string>
using namespace std;

class Corrida
{
	private:
		string local;
		int horario;
		int voltas;
	public:
		Corrida(string, int, int);
		~Corrida();
		virtual void imprime() const;
		void setLocal(string);
		string getLocal() const;
		void setHorario(int);
		int getHorario() const;
		void setVoltas(int);
		int getVoltas() const;
		friend float calcTempo(Corrida);
};
#endif
