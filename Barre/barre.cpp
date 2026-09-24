/**
 * @file Barre.cpp
 * @author Paul LAMOTTE
 * @date 24/09/26
 * @version 1.0
 * @brief Implémentation de la classe Barre
 *
 * @details Contient le code de toutes les méthodes déclarées dans Barre.h
 * */

#include "barre.h"
#include <iostream>

using namespace std;

Barre::Barre(const string & _reference, const int _longueur, const int _densite, const string & _nomAlliage):
    reference(_reference),
    nomAlliage(_nomAlliage),
    longueur(_longueur),
    densite(_densite)
{
    cout << "Constructeur de la classe Barre" << endl;
}

void Barre::AfficherCaracteristiques()
{
    cout << "La référence de la barre est : " << reference << ". L'alliage est : " << nomAlliage << endl;
}
