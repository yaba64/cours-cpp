#include <iostream>

using namespace std;

int main()
{
    cout << "Bienvenue dans le programme d'addition" << endl << endl;
    double a(0), b(0);
    cout << "Entrez le 1er nombre \205 additionner : "; cin >> a; // Regarder ds table ASCII la valeur en Decimal et l'�quivalence en OCTAL qui doit �tre mis ici
    cout << "Entrez le 2�me nombre \205 additionner : "; cin >> b; cout << endl;

    double const resultat(a + b);

    cout << "Le r\202sultat est : " << resultat;


    return 0;
}
