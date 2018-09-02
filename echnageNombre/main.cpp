#include <iostream>

using namespace std;

void echange(double& a, double& b) /*Si l'on n'utilisait pas un passage par référence,
ce seraient alors des copies des arguments qui seraient échangées,
et non les vrais arguments. Cette fonction serait donc inutile.*/
{
    double temporaire(a); //On sauvegarde la valeur de 'a'
    a = b;                //On remplace la valeur de 'a' par celle de 'b'
    b = temporaire;       //Et on utilise la valeur sauvegardée pour mettre l'ancienne valeur de 'a' dans 'b'
}

int main()
{
    double a(1.2), b(4.5);

    cout << "a vaut " << a << " et b vaut " << b << endl;

    echange(a,b);   //On utilise la fonction

    cout << "a vaut " << a << " et b vaut " << b << endl;
    return 0;
}
