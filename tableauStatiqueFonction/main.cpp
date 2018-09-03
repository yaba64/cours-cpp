#include <iostream>
#include <vector> //Ne pas oublier !

using namespace std;


//Prototype
double moyenne(vector<double> tableau(), int tailleTableau);


/*
 *  Fonction qui calcule la moyenne des éléments d'un tableau
 *  - tableau : Le tableau dont on veut la moyenne
 *  - tailleTableau : La taille du tableau
 */
double moyenne(vector<double> const& tableau)
{
   double moyenne(0);
   for(int i(0); i<tableau.size(); ++i)
   {
      moyenne += tableau[i];   //On additionne toutes les valeurs
   }
   moyenne /= tableau.size();

   return moyenne;
}


int main()
{

   vector<double> notes;

   notes.push_back(12.5);
   notes.push_back(19.5);  //Bieeeen !
   notes.push_back(6);    //Pas bien !
   notes.push_back(13);
   notes.push_back(14.5);
   notes.push_back(15);
   notes.push_back(20);

   cout << "Votre moyenne est : " << moyenne(notes) << " pour vos " << notes.size() << " notes." << endl;


   return 0;

}
