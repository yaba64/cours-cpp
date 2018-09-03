#include <iostream>

using namespace std;

int main()
{
    int nbEnfants(0);
    string recommencer("oui");

    do
    {

        cout << "Bonjour" << endl;
        cout << "Combien avez-vous d'enfants ? : ";
        cin >> nbEnfants;

        if (nbEnfants > 0 && nbEnfants <= 3 )
        {
            cout << "Vous avez " << nbEnfants << " enfant(s), bravo !" << endl;
        }
        else if (nbEnfants > 3)
        {
            cout << "Vous avez " << nbEnfants << " enfant(s), ah oui quand m\210me !" << endl;
        }

        else
        {
            cout << "Quel dommage !!" << endl;
        }
        cout << "Voulez vous recommencer ?" << endl;
        cin >> recommencer;

    } while (recommencer == "oui");

    cout << "Fin du programme" << endl;


    return 0;
}
