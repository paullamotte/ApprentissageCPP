/**
 * @file Barre.h
 * @author Paul LAMOTTE
 * @date 24/09/26
 * @version 1.0
 * @brief Déclaration de la classe Barre
 *
 * @details Contient l'interface de la classe Barre
 * */

#ifndef BARRE_H
#define BARRE_H

#include <iostream>
#include <string>

using namespace std;

class Barre
{
public:
    Barre(const string & _reference, const int _longueur, const int _densite, const string & _nomAlliage);
    void AfficherCaracteristiques();

protected:
    string reference;
    string nomAlliage;
    int longueur;
    int densite;

};

#endif // BARRE_H
