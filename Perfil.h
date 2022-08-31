#ifndef PERFIL_H
#define PERFIL_H

using namespace std;

class Perfil
{
	private:
		int vitorias;
	public:
		Perfil(int);
		~Perfil();
		void setVitorias(int);
		int getVitorias() const;
		friend class Podio;
};
#endif

