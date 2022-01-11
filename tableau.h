#pragma once
class tableau
{
public:
	
	tableau(int taille);
	
	tableau(const tableau& T,int taille);
	
	void saisie();
	tableau& operator=(const tableau& T);
	
	float& operator[](int indice);
	~tableau();


protected:
	float* var;
	int taille;
};
