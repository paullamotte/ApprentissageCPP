#include "rectangle.h"

Rectangle::Rectangle(const string & _couleur, const float _epaisseurTrait, const float _longueur, const float _largeur):
    Forme(_couleur, _epaisseurTrait),
    longueur(_longueur),
    largeur(_largeur)
{

}

float Rectangle::CalculerSurface()
{
    return(longueur * largeur);
}
