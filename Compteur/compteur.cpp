#include "compteur.h"


Compteur::Compteur(int _valeurInit, int _pas):
    valeurInit(_valeurInit),
    pas(_pas)
{

}

Compteur::~Compteur()
{

}

void Compteur::Incrementer()
{
    valeurInit = pas + valeurInit;
}

void Compteur::Decrementer()
{
    valeurInit = valeurInit - pas;
}

void Compteur::Reinitialiser()
{
    valeurInit = 0;
}

int Compteur::getValeur() const
{
    return valeurInit;
}

void Compteur::setValeur(int _v)
{
    valeurInit = _v;
}

int Compteur::getPas() const
{
    return pas;
}

void Compteur::setPas(int _p)
{
    pas = _p;
}

Compteur Compteur::operator+(const Compteur &_autre) const
{
    return Compteur(valeurInit + _autre.valeurInit, pas);
}

bool Compteur::operator==(const Compteur &_autre)
{
    bool retour = false;
    if(pas == _autre.pas && valeurInit == _autre.valeurInit)
        retour = true;
    return retour;
}

ostream & operator << (ostream &_flux, Compteur &_cpt)
{
    _flux << "Compteur (pas = " <<_cpt.pas << ", valeur = " << _cpt.valeurInit << ")" << endl;
    return _flux;
}