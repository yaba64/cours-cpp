#include <iostream>
#include "dessin.h"
using namespace std;


int main()
{
    int largeur, hauteur;

    do
    {
        cout << "Largeur du rectangle : ";
        cin >> largeur;

        cout << "Hauteur du rectangle : ";
        cin >> hauteur;

        if (largeur <= 0 || hauteur <= 0)
        {
            cout << "La largeur et la hauteur n'accepte qu'un nombre positif voyons!!!!" << endl;
        }
        else
        {
            dessineRectangle(largeur, hauteur);
        }

    } while (largeur <= 0 || hauteur <= 0);


    return 0;
}
