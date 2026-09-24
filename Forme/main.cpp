#include "cercle.h"
#include "rectangle.h"
#include <iostream>

using namespace std;

int main()
{
    // Instancier un Rectangle rouge, trait 1.5, 10x4
    Rectangle unRectangle("Rouge", 1.5, 10, 4);
    // Affiche : Constructeur Forme
    // Affiche : Constructeur Rectangle
    // Instancier un Cercle bleu, trait 0.5, rayon 7
    Cercle unCercle("Bleu", 0.5, 7);
    // Affiche : Constructeur Forme
    // Affiche : Constructeur Cercle
    unRectangle.Afficher();              // appelle Afficher() héritée de Forme
    unCercle.Afficher();              // appelle Afficher() héritée de Forme
    cout << "Surface Rectangle : " << unRectangle.CalculerSurface() << endl;  // 40
    cout << "Surface Cercle    : " << unCercle.CalculerSurface() << endl;  // ~153.94
    return 0;
}