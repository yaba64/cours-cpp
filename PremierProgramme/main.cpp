#include <iostream>
#include <cstdlib>

using namespace std;
int main()
{
    cout << "Quel est votre prenom ?" << endl;
    string nomUtilisateur("Sans nom"); //On cr�e une case m�moire pour contenirune chaine de caract�res
    cin >> nomUtilisateur; //On remplit cette case avec ce qu'�crit l'utilisateur

    cout << "Combien vaut pi ?" << endl;
    double piUtilisateur(-1.); //On cr�e une case m�moire pour stocker un nombre r�el
    cin >> piUtilisateur; //Et on remplit cette case avec ce qu'�critl'utilisateur

    cout << "Vous vous appelez " << nomUtilisateur << " et vous pensez que pi vaut " << piUtilisateur << "." << endl;

    return 0;
}
