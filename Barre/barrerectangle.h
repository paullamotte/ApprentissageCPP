/**
 * @file Barre.h
 * @author Paul LAMOTTE
 * @date 24/09/26
 * @version 1.0
 * @brief Déclaration de la classe BarreRectangle
 *
 * @details Contient l'interface de la classe BarreRectangle
 * */

#ifndef BARRERECTANGLE_H
#define BARRERECTANGLE_H

#include "barre.h"
#include <string>

using namespace std;

class BarreRectangle: public Barre
{
public:
    BarreRectangle(const string & _reference, const int _longueur, const int _densite, const string & _nomAlliage, const int _largeur);
    float CalculerSection();
    float CalculerMasse();

private:
    int largeur;
    float sRectangle;

};

#endif // BARRERECTANGLE_H
