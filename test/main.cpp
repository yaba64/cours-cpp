#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string const dico("dico.txt");
    ifstream monFlux(dico.c_str());

    if(monFlux)
    {
        string ligne;
        int nbreLines = { 0 };
        while ( getline(monFlux, ligne) )
        {
            ++nbreLines;
        }

        cout << nbreLines << endl;
        cout << ligne << endl;

        monFlux.close();

        ifstream monFlux(dico.c_str());
        getline(monFlux, ligne);
        getline(monFlux, ligne);
        cout << ligne << endl;
    }


    else
    {
        cout << "ERREUR: Impossible d'ouvrir le fichier." << endl;
    }
    return 0;
}
