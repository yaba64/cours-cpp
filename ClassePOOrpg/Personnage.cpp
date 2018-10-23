
#include "Personnage.h"


using namespace std;


Personnage::Personnage(string nom) : m_nomPersonnage(nom), m_vie(100), m_mana(100)
{

}

Personnage::Personnage(string nom, string nomArme, int degatsArme) : m_nomPersonnage(nom), m_vie(100), m_mana(100), m_arme(nomArme, degatsArme)
{

}

Personnage::Personnage(string nom, int vie, int mana, string nomArme, int degatsArme) : m_nomPersonnage(nom), m_vie(vie), m_mana(mana), m_arme(nomArme, degatsArme)
{

}


Personnage::~Personnage()
{

}

void Personnage::recevoirDegats(int nbDegats)
{
    m_vie -= nbDegats;

    if (m_vie < 0)
    {
        m_vie = 0;
    }
}

void Personnage::attaquer(Personnage &cible)
{
    cout << m_nomPersonnage << " attaque " << cible.m_nomPersonnage << endl;
    cible.recevoirDegats(m_arme.getDegats());
    cout << cible.m_nomPersonnage << " perd " << m_arme.getDegats() << " points de vie." << endl << endl;
}

void Personnage::bouleDeFeu(Personnage &cible)
{
    cout << m_nomPersonnage << " lance boule de feu sur " << cible.m_nomPersonnage << endl;
    cible.recevoirDegats(m_arme.getDegats());
    cout << cible.m_nomPersonnage << " perd " << m_arme.getDegats() << " points de vie." << endl << endl;
}

void Personnage::boirePotionDeVie(int quantitePotion)
{
    cout << m_nomPersonnage << " boit potion de vie et recupere " << quantitePotion << " points de vie." << endl << endl;
    m_vie += quantitePotion;

    if (m_vie > 100)
    {
        m_vie = 100;
    }
}

void Personnage::changerArme(string nomNouvelleArme, int degatsNouvelleArme)
{
    cout << m_nomPersonnage << " change d'arme pour " << nomNouvelleArme << " de " << degatsNouvelleArme << " points de dégats." << endl << endl;
    m_arme.changer(nomNouvelleArme, degatsNouvelleArme);
}

bool Personnage::estVivant()
{
    if (m_vie > 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void Personnage::afficherEtat()
{
    cout << m_nomPersonnage << endl;
    cout << "Vie : " << m_vie << endl;
    cout << "Mana : " << m_mana << endl;
    m_arme.afficher();
    cout << '\n' ;
}
