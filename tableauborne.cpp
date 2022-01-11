#include "tableauborne.h"
#include "tableau.h"

#include <assert.h>
#include "iostream"

using namespace std;



tableauborne::tableauborne(int taille, float x, float y)

:tableau(taille)
{
this->l= (x >= 0 && x < taille) ?x : 0;

this->r = (y<taille && y > x) ? y :5;
}

float& tableauborne::operator[](int indice)
{
if (indice >= this->l && indice <= this->r) {
	return this->var[indice];
	}
}

void tableauborne::operator()(int indice, float val)
{
if (indice < taille && indice >= this->l && indice <= this->r) {
		this->var[indice] = val;
	}
	else {
		std::cout <<"indice incorrect ! "<< std::endl;
	}
}

tableauborne::~tableauborne()
{
	std::cout << "destructeur de la classe tableauborne " << std::endl;
}
