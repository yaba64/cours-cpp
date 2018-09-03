#include <iostream>
#include <ctime>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

// prototype
string melangeMot(string motRecu); // Fonction pour melanger le mot

string motDeListe();


int main()
{
    // Le programme choisi un mot au hasard à partir d'une liste


    string motMystere(motDeListe());


    // Le programme mélange les lettre du mot et l'affiche

    string motMelange(melangeMot(motMystere));
    cout << "Mot a trouver ? : " << motMelange << "\n\n" << endl;


    // On demande à l'utilisateur quel est le mot mystere

    string motUtilisateur;
    do
    {
        cout << "Quel est le mot mystere ? : ";
        cin >> motUtilisateur;
    }
    while(motMystere != motUtilisateur);

    cout << "\nBravo vous avez trouve !!!\n";
    // Le programme compare le mot donné par l'utilisateur au mot d'originie.

    return 0;
}




//Fonctions
string melangeMot(string motRecu)
{

    string motMelange("");
    int nbAleatoire(0);

    int tailleMot(motRecu.size());

    for ( int i(0); i < tailleMot ; i++)
    {

        srand(time(0));
        nbAleatoire = rand() % motRecu.size(); // pour generer un nbre aleatoire entre 0 et la taille du mot mystere;

        string lettre;
        lettre = motRecu[nbAleatoire];

        motMelange += lettre;

        motRecu.erase(nbAleatoire, 1);

    }
    return motMelange;
}

string motDeListe()
{
    string mot;
    string ligne;
    string const dico("dico.txt");
    ifstream monFlux(dico.c_str());

    int nbreLines = { 0 };
    if(monFlux)
    {

        while ( getline(monFlux, ligne) )
        {
            ++nbreLines;
        }

        monFlux.close();

        ifstream monFlux(dico.c_str());
        // nombre Aléatoire
        srand(time(0));
        int const ligneAuHazard = rand() % nbreLines;

        int position = { 0 };
        while ( position != ligneAuHazard )
        {
            getline(monFlux, ligne);
            ++position;
        }
        mot = ligne;

    }
    else
    {
        cout << "ERREUR: Impossible d'ouvrir le fichier." << endl;
    }
    return mot;
}



