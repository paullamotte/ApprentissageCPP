/**
 * @file BarreRectangle.cpp
 * @author Paul LAMOTTE
 * @date 24/09/26
 * @version 1.0
 * @brief Implémentation de la classe BarreRectangle
 *
 * @details Contient le code de toutes les méthodes déclarées dans BarreRectangle.h
 * */

#include "barrerectangle.h"
#include <iostream>

BarreRectangle::BarreRectangle(const string & _reference, const int _longueur, const int _densite, const string & _nomAlliage, const int _largeur):
    Barre(_reference, _longueur, _densite, _nomAlliage),
    largeur(_largeur)
{
    cout << "Constructeur de la classe Barre Rectangle" << endl;
}

float BarreRectangle::CalculerSection()
{
    sRectangle = longueur * largeur;
    return sRectangle;
}

float BarreRectangle::CalculerMasse()
{
    float masseRectangle = 0;
    masseRectangle = longueur * sRectangle * densite;
    return masseRectangle;
}
