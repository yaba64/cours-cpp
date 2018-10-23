#include <iostream>
using namespace std;

int main()
{
    int ageUtilisateur(16);
    int *ptr(0);

    ptr = &ageUtilisateur;

    cout << "L'adresse de 'ageUtilisateur' est : " << &ageUtilisateur << endl; // case memoire de la variable
    cout << "La valeur de pointeur est : " << ptr << endl;                     // case memoire de la variable pointée
    cout << "La valeur de la variable pointée est : " << *ptr << endl;         // valeur de la variable pointé
    *ptr = 18;
    cout << "La nouvelle valeur de la variable pointée est : " << *ptr << endl;
    cout << "La valeur de la variable est : " << ageUtilisateur << endl;
    cout << "L'adresse du pointeur est : " << &ptr << endl;                    // cse mémoire du pointeur

    int *pointeur(0);
    pointeur = new int;         //Allouer un espace mémoire

    *pointeur = 2;  //On accède à la case mémoire pour en modifier la valeur

    delete pointeur;  //On libère la case mémoire
    pointeur = 0;       //On indique que le pointeur ne pointe plus vers rien

    // Exemple programme complet avec pointeur .....

    cout << "\n==============================================\n" << endl;

    // pointeur est déja déclaré plus haut
    pointeur = new int;

    cout << "Quel est votre age ? ";
    cin >> *pointeur;
    //On écrit dans la case mémoire pointée par le pointeur 'pointeur'

    cout << "Vous avez " << *pointeur << " ans." << endl;
    //On utilise à nouveau *pointeur
    delete pointeur;   //Ne pas oublier de libérer la mémoire
    pointeur = 0;       //Et de faire pointer le pointeur vers rien

    cout << "\n==============================================\n" << endl;

    // Autre exemple avec QCM
    string reponseA, reponseB, reponseC;
    reponseA = "La peur des jeux de loterie";
    reponseB = "La peur du noir";
    reponseC = "La peur des vendredis treize";

    cout << "Qu'est-ce que la 'kenophobie' ? " << endl; //On pose la question
    cout << "A) " << reponseA << endl; //Et on affiche les trois propositions
    cout << "B) " << reponseB << endl;
    cout << "C) " << reponseC << endl;

    char reponse;
    cout << "Votre reponse (A,B ou C) : ";
    cin >> reponse; //On récupère la réponse de l'utilisateur

    string *reponseUtilisateur(0); //Un pointeur qui pointera sur la réponse choisie
    switch(reponse)
    {
    case 'A':
        reponseUtilisateur = &reponseA; //On déplace le pointeur sur la réponse choisie
        break;
    case 'B':
        reponseUtilisateur = &reponseB;
        break;
    case 'C':
        reponseUtilisateur = &reponseC;
        break;
    }

    //On peut alors utiliser le pointeur pour afficher la réponse choisie
    cout << "Vous avez choisi la reponse : " << *reponseUtilisateur << endl;


    return 0;
}
