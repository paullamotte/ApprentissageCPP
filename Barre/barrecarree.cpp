/**
 * @file BarreCarree.cpp
 * @author Paul LAMOTTE
 * @date 24/09/26
 * @version 1.0
 * @brief Implémentation de la classe BarreCarree
 *
 * @details Contient le code de toutes les méthodes déclarées dans BarreCarree.h
 * */

#include "barrecarree.h"
#include <iostream>

BarreCarree::BarreCarree(const string & _reference, const int _longueur, const int _densite, const string & _nomAlliage, const int _diametre):
    Barre(_reference, _longueur, _densite, _nomAlliage),
    diametre(_diametre)
{
    cout << "Constructeur de la classe Barre Carrée" << endl;
}

float BarreCarree::CalculerSection()
{
    sCarree = diametre * diametre;
    return sCarree;
}

float BarreCarree::CalculerMasse()
{
    float masseCarree = 0;
    masseCarree = longueur * sCarree * densite;
    return masseCarree;
}
