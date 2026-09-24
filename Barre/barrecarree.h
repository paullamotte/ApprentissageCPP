/**
 * @file Barre.h
 * @author Paul LAMOTTE
 * @date 24/09/26
 * @version 1.0
 * @brief Déclaration de la classe BarreCarree
 *
 * @details Contient l'interface de la classe BarreCarree
 * */

#ifndef BARRECARREE_H
#define BARRECARREE_H

#include "barre.h"
#include <string>

using namespace std;

class BarreCarree: public Barre
{
public:
    BarreCarree(const string & _reference, const int _longueur, const int _densite, const string & _nomAlliage, const int _diametre);
    float CalculerSection();
    float CalculerMasse();

private:
    int diametre;
    float sCarree;

};

#endif // BARRECARREE_H
