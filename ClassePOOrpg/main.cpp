#include <iostream>
#include <string>
#include "Personnage.h"

using namespace std;


int main()
{
    // Création des personnages
    Personnage david("david"), goliath("goliath", "Epée aiguisée", 20), magicien("gandalf", 70, 200, "baguette magique brulante", 30);

    // Au combat !
    cout << "============= ETAT DE DEPART ==============" << endl;
    david.afficherEtat(); goliath.afficherEtat(); magicien.afficherEtat();

    cout << "============= DEROULEMENT DU COMBAT ==============" << endl;
    goliath.attaquer(david);
    david.boirePotionDeVie(20);
    goliath.attaquer(david);
    david.attaquer(goliath);
    goliath.changerArme("Double hache tranchante vénéneuse de la mort", 40);
    goliath.attaquer(david);
    magicien.attaquer(goliath);  // gandalf vient en ide à david

    // Temps mort ! Voyons voir la vie de chacun...
    cout << "================ ETAT APRES COMBAT ==============" << endl;
    david.afficherEtat();
    goliath.afficherEtat();
    magicien.afficherEtat();

    return 0;
}
