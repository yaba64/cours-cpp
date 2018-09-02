#include <iostream>
#include <ctime> // Obligatoire
#include <cstdlib>
using namespace std;

// prototype
string melangeMot(string motRecu);


int main()
{
    // Le programme choisi un mot au hasard à partir d'une liste A FAIRE!!!!!!!!
    string motMystere("HAZARD");


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
