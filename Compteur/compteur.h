#ifndef COMPTEUR_H
#define COMPTEUR_H
#include <iostream>

using namespace std;

class Compteur
{

public:
    Compteur(int _valeurInit = 0, int _pas = 1);
    ~Compteur();
    void Incrementer();
    void Decrementer();
    void Reinitialiser();
    int getValeur() const;
    void setValeur (int _v);
    int getPas() const;
    void setPas(int _p);
    Compteur operator+(const Compteur & _autre) const;
    bool operator==(const Compteur & _autre);
    friend ostream & operator << (ostream &_flux, Compteur &_cpt);

private:
    int valeurInit;
    int pas;
};

#endif // COMPTEUR_H