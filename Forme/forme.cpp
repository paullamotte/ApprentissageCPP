#include "forme.h"
#include <iostream>

Forme::Forme(const string & _couleur, const float _epaisseurTrait):
    couleur(_couleur),
    epaisseurTrait(_epaisseurTrait)
{

}

void Forme::Afficher()
{
    cout << "Couleur : " << couleur << ". Epaisseur : " << epaisseurTrait << endl;
}
