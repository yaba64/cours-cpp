#include <string>
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <fstream>
#include <cctype>
#include <algorithm>

using namespace std;

//prototype des fonctions
string melangerLettres(string mot);
string motDeListe();
// Pour convertir en majuscule ( bout de code recuperé dans doc)
struct my_toupper
{
    char operator()(char c) const
    {
        return std::toupper(static_cast<unsigned char>(c));
    }
};

int main()

{
    cout << " \311\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\273" << endl;
    cout << " \272********************************************************\272" << endl;
    cout << " \272******************* JEU DU MOT MYSTERE *****************\272" << endl;
    cout << " \272********************************************************\272" << endl;
    cout << " \272                      REGLES DU JEU                     \272" << endl;
    cout << " \272                                                        \272" << endl;
    cout << " \272  - Un mot est tir\202 au sort et les lettres melang\202es    \272" << endl;
    cout << " \272  - Vous avez six coups pour trouver le mot             \272" << endl;
    cout << " \272  - Chaque lettre trouv\202e \205 la bonne place est valid\202e  \272" << endl;
    cout << " \310\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\274\n" << endl;

    string boucler;
    do
    {

        string motMystere, motMelange, motUtilisateur;
        int nbreCoup(0);

        //Initialisation des nombres aléatoires
        srand(time(0));

        //1 PIOCHE DANS LE DICO
        motMystere = motDeListe();

        //2 : On récupère le mot avec les lettres mélangées dans motMelange
        motMelange = melangerLettres(motMystere);

        // Affichage des etoiles nombre de lettres a trouver
        string motAffiche, motEnCours;
        for ( int i=0; i<motMystere.size(); i++ )
        {
            motAffiche += "*";
        }

        //3 : On demande à l'utilisateur quel est le mot mystère
        do
        {
            nbreCoup++;

            cout << endl << "Essai n\370 : " << nbreCoup << endl;
            cout << "Quel est ce mot ? : " << motMelange << endl;
            cout << motAffiche << endl;
            cin >> motUtilisateur;

            //convertir le mot en majuscule si tapé en minuscule par utilisateur
            transform(motUtilisateur.begin(), motUtilisateur.end(), motUtilisateur.begin(), my_toupper());

            // je Reinitialise motAffiche a zero
            motAffiche = "";

            //On remplace les étoiles par les lettres justes
            for ( int j=0; j<motMystere.size(); j++ )
            {
                if (motUtilisateur[j]==motMystere[j])
                {
                    motAffiche += motUtilisateur[j];
                }
                else
                {
                    motAffiche += "*";
                }
            }



            if (motUtilisateur == motMystere)
            {
                cout << "\nBravo !" << endl;
            }
            else
            {
                cout << "Ce n'est pas le mot !" << endl;
                //Affichage du résultat au bout des 6 coups si non trouvé
                if (nbreCoup == 6 )
                {
                    cout << "Le mot \205 trouver \202tait : " << motMystere << endl;
                }
            }

    }while ((motUtilisateur != motMystere) && (nbreCoup != 6));
    //On recommence tant qu'il n'a pas trouvé


    cout << "\nVoulez vous rejouer ? : Tapez oui ou non : ";
    cin >> boucler;
    cout << endl;



    }while ( !(boucler=="non"||boucler=="Non"||boucler=="N"||boucler=="NON"||boucler=="n"
              ||boucler=="no"||boucler=="No"||boucler=="NO") );

    return 0;
}

string melangerLettres(string mot)
{
    string melange;
    int position(0);

    //Tant qu'on n'a pas extrait toutes les lettres du mot
    while (mot.size() != 0)
    {
        //On choisit un numéro de lettre au hasard dans le mot
        position = rand() % mot.size();
        //On ajoute la lettre dans le mot mélangé
        melange += mot[position];
        //On retire cette lettre du mot mystère
        //Pour ne pas la prendre une deuxième fois
        mot.erase(position, 1);
    }

    //On renvoie le mot mélangé
    return melange;
}

string motDeListe()
{
    string motDuDico;
    string ligne;
    string const DICO("dico.txt");
    ifstream monFlux(DICO.c_str());

    int nbreLines(0);
    if(monFlux)
    {

        while ( getline(monFlux, ligne) )
        {
            ++nbreLines;
        }

        monFlux.close();

        ifstream monFlux(DICO.c_str());
        // nombre Aléatoire
        srand(time(0));
        int const LIGNEHAZARD = rand() % nbreLines;

        int position(0);
        while ( position != LIGNEHAZARD )
        {
            getline(monFlux, ligne);
            ++position;
        }
        motDuDico = ligne;

        monFlux.close();

    }
    else
    {
        cout << "ERREUR: Impossible d'ouvrir le fichier." << endl;
    }
    return motDuDico;
}

