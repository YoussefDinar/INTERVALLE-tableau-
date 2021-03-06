#include <iostream>
#include "tableau.h"
#include <assert.h>
using namespace std;

tableau::tableau(int taille)
{
	this->var = new float[taille];
	for (int i = 0; i < taille;i++) {
		this->var[i] = 0;
	}
	this->taille = taille;
}
tableau::tableau(const tableau &T,int taille) {
	this->var = new float[taille];
	assert((taille >= 0 && taille < T.taille));
	for (int i = 0; i < taille ; i++) {
		this->var[i] = T.var[i];
	}
	this->taille = taille;
}

void tableau::saisie()
{
	for (int i = 0; i < this->taille;i++) {
	std::cin >> this->var[i];
	}
}


tableau& tableau::operator=(const tableau& T)
{
	if (this!=&T) {
		delete[] this->var;
		this->var = 0;
		this->var = new float[T.taille];
		for (int i = 0; i < T.taille; i++) {
			this->var[i] = T.var[i];
		}
	}
	return *this;
}

float& tableau::operator[](int indice)
{
	assert((indice >= 0 && indice < this->taille));
	return this->var[indice];
}

tableau::~tableau()
{
	std::cout << "destructeur de la classe tableau" << std::endl;
	delete this->var;
	this->var = 0;
}
