#ifndef CERCLE_H
#define CERCLE_H
#include "forme.h"

class Cercle: public Forme
{
public:
    Cercle(const string & _couleur, const float _epaisseurTrait, const float _rayon);
    float CalculerSurface();

private:
    float rayon;
};

#endif // CERCLE_H
