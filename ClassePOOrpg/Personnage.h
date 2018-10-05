#ifndef DEF_PERSONNAGE
#define DEF_PERSONNAGE

#include <iostream>
#include <string>
#include "Arme.h"

class Personnage
{
    public:

    Personnage(std::string nom);
    Personnage(std::string nom, std::string nomArme, int degatsArme);
    Personnage(std::string nom, int vie, int mana, std::string nomArme, int degatsArme);
    ~Personnage();
    void recevoirDegats(int nbDegats);
    void attaquer(Personnage &cible);
    void bouleDeFeu(Personnage &cible);
    void boirePotionDeVie(int quantitePotion);
    void changerArme(std::string nomNouvelleArme, int degatsNouvelleArme);
    bool estVivant();
    void afficherEtat();

    private:

    std::string m_nomPersonnage;
    int m_vie;
    int m_mana;
    Arme m_arme;
};

#endif
