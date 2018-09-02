#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string const nomFichier("/media/marc/DATA/ProgrammeC++/EcrireDansFichier/");
    ofstream monFlux(nomFichier.c_str(), ios::app); // app pour append et rajouter des lignes aux fichiers déja existant

    if(monFlux)
    {
        string nom;
        int age;
        cout << "Bonjour quel est votre nom svp ? : "; getline(cin, nom); cout << endl; //getline pour pouvoir rentrer des espaces .
        // cin.ignore(); si on utilise cin avant getline

        cout << "Bonjour quel est votre age svp ? : "; cin >> age; cout << endl;

        monFlux << "Bonjour, je m'appelle " << nom << " et j'ai " << age << " ans." << endl;

    }
    else
    {
        cout << "ERREUR: Impossible d'ouvrir le fichier." << endl;
    }
    return 0;
}
