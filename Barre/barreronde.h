/**
 * @file Barre.h
 * @author Paul LAMOTTE
 * @date 24/09/26
 * @version 1.0
 * @brief Déclaration de la classe BarreRonde
 *
 * @details Contient l'interface de la classe BarreRonde
 * */

#ifndef BARRERONDE_H
#define BARRERONDE_H

#include "barre.h"
#include <string>

using namespace std;

class BarreRonde: public Barre
{
public:
    BarreRonde(const int _diametre);
    float CalculerSection();
    float CalculerMasse();

private:
    int diametre;

};

#endif // BARRERONDE_H
