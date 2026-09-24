#include <iostream>
#include "barre.h"
#include "barrecarree.h"
#include "barrerectangle.h"
#include "barreronde.h"

using namespace std;

int main()
{
    Barre uneBarre("JeSaisPas", 10, 5, "Or");
    uneBarre.AfficherCaracteristiques();

    cout << "Barre Carrée ------------------" << endl;
    BarreCarree uneBarre2("Carrée", 10, 5, "Or", 5);
    uneBarre2.AfficherCaracteristiques();
    cout << "La superficie est de " << uneBarre2.CalculerSection() << endl;

    return 0;
}
