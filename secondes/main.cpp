#include <iostream>

using namespace std;

// Prototype de la fonction
int nombreDeSecondes(int heures=0, int minutes=0, int secondes=0); //seul le prototype doit contenir les valeurs par défaut (pas la définition de la fonction)

// Main
int main()
{
    int heures, minutes, secondes;

    cout << "Programme de conversion en secondes : " << endl;
    cout << "Entrez heures : "; cin >> heures;
    cout << "Entrez minutes : "; cin >> minutes;
    cout << "Entrez secondes : "; cin >> secondes;
    cout << nombreDeSecondes(heures, minutes, secondes) << endl;

    return 0;
}

// Définition de la fonction
int nombreDeSecondes(int heures, int minutes, int secondes)
{
    int total = 0;

    total = heures * 60 * 60;
    total += minutes * 60;
    total += secondes;

    return total;
}
