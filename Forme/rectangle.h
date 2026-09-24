#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "forme.h"

class Rectangle: public Forme
{
public:
    Rectangle(const string & _couleur, const float _epaisseurTrait, const float _longueur, const float _largeur);
    float CalculerSurface();

private:
    float longueur;
    float largeur;
};

#endif // RECTANGLE_H
