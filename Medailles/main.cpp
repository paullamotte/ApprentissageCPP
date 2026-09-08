#include <fstream>
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
int main()
{
    string motCle ;
    // string remplace un tableau de caractères. la taille de la chaîne est dynamique
    int gold;
    int argent;
    int bronze;
    ifstream fichier("medailles.txt");
    if (!fichier.is_open())
        cerr << "Erreur lors de l'ouverture du fichier" << endl;
    else
    {
        cout << "+" << setfill('-') << setw(19) << "+" << setw(6) << "+" << setw(6) << "+" << setw(6) << "+" << endl;

        do
        {
            // le fichier contient sur chaque ligne des couples mot clé + valeur
            fichier >> motCle >> gold >> argent >> bronze;
            if (fichier.good())//Si les valeurs ont bien été lues
            {
                cout << left << "|" << setfill(' ') << setw(18) << motCle << "|" << setw(5) << right
                << gold << "|" << setw(5) << argent << "|" << setw(5) << bronze << "|" << endl;
            }
        } while(!fichier.eof());

        cout << "+" << right << setfill('-') << setw(19) << "+" << setw(6) << "+" << setw(6) << "+" << setw(6) << "+" << endl;
    }
    return 0 ;
}