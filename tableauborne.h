#pragma once
#include "tableau.h"
class tableauborne :
    public tableau
{
private:
    float l;
    float r;
public:
    tableauborne(int taille, float x, float y);
    float& operator[](int indice);
    void operator()(int indice, float v);
    ~tableauborne();
};