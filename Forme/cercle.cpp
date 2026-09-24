#include "cercle.h"
#include "cmath"

Cercle::Cercle(const string & _couleur, const float _epaisseurTrait, const float _rayon):
    Forme(_couleur, _epaisseurTrait),
    rayon(_rayon)
{

}

float Cercle::CalculerSurface()
{
    return(M_PI * rayon * rayon);
}
