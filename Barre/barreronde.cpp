/**
 * @file BarreRonde.cpp
 * @author Paul LAMOTTE
 * @date 24/09/26
 * @version 1.0
 * @brief Implémentation de la classe BarreRonde
 *
 * @details Contient le code de toutes les méthodes déclarées dans BarreRonde.h
 * */

#include "barreronde.h"
#include <cmath>
#include <iostream>

BarreRonde::BarreRonde(const int _diametre):
    Barre(reference, longueur, densite, nomAlliage),
    diametre(_diametre)
{
    cout << "Constructeur de la classe Barre Ronde" << endl;
}

float BarreRonde::CalculerSection()
{
    return(M_PI * (diametre * diametre) / 4);
}

float BarreRonde::CalculerMasse()
{
    float masseRond = 0;
    masseRond = longueur * CalculerSection() * densite;
    return masseRond;
}
