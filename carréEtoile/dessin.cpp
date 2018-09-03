#include "dessin.h"
#include <iostream>


void dessineRectangle(int l, int h)
{
    std::string symbole;
    std::cout << "Choisissez votre symbole : ";
    std::cin >> symbole;

    for(int ligne(0); ligne < h; ligne++)
    {
        for(int colonne(0); colonne < l; colonne++)
        {
            std::cout <<  symbole << " ";
        }
        std::cout << std::endl;
    }
}
