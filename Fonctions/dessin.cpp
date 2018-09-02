#include "dessin.h"

void dessineRectangle(int l, int h)
{
    string symbole;
    cout << "Choisissez votre symbole : ";
    cin >> symbole;

    for(int ligne(0); ligne < h; ligne++)
    {
        for(int colonne(0); colonne < l; colonne++)
        {
            cout <<  symbole << " ";
        }
        cout << endl;
    }
}
