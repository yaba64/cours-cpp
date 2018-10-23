#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream fichier("/media/marc/DATA/ProgrammeC++/EcrireDansFichier/NomEtAge.txt");


    if(fichier)
    {
        //L'ouverture s'est bien passée, on peut donc lire

        string ligne; //Une variable pour stocker les lignes lues

        while(getline(fichier, ligne)) //Tant qu'on n'est pas à la fin, on lit
        {
            cout << ligne << endl;
            //Et on l'affiche dans la console
            //Ou alors on fait quelque chose avec cette ligne
            //À vous de voir
        }

        fichier.seekg(0, ios::end);  //On se déplace à la fin du fichier

        int taille;
        taille = fichier.tellg();
        //On récupère la position qui correspond donc a la taille du fichier !


        cout << "\nTaille du fichier : " << taille << " octets." << endl;

    }

    else
    {
        cout << "ERREUR: Impossible d'ouvrir le fichier en lecture." << endl;
    }



    return 0;
}
