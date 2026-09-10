#include "menu.h"
#include <algorithm>
#include <fstream>
#include <iostream>
#include <string>
#include <iomanip>
#include <limits>

using namespace std;

Menu::Menu(const string _nom):
    nom(_nom),
    longueurMax(0)
{

    ifstream fichier("menu.txt");
    if (!fichier.is_open())
        cerr << "Erreur lors de l'ouverture du fichier." << endl;
    else
    {
        nbOptions = static_cast<int>(count(istreambuf_iterator<char>(fichier),istreambuf_iterator<char>(),'\n'));
        cout << "nbOptions: " << nbOptions << endl;
        options = new string [nbOptions];
        char ligne[50];
        fichier.seekg(0,ios::beg);
        for (int var = 0; var < nbOptions; var++) {
            fichier.getline(ligne, 50);
            cout << ligne << endl;
        }
        fichier.close();
    }
}

Menu::~Menu()
{
    delete[] options;
}

int Menu::Afficher()
{
    int choix = 0;
    if(!(cin>>choix))
    {
        cin.clear();
        cin.ignore(std::numeric_limits<streamsize>::max(),'\n');
        choix = -1;
    }



    return choix;
}

void Menu::AttendreAppuiTouche()
{
    string uneChaine;
    cout << endl << "Appuyer sur la touche Entrée pour continuer...";
    getline(cin,uneChaine);
    cin.ignore( std::numeric_limits<streamsize>::max(), '\n' );
    system("clear");
}