#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<float> tableau1;
    vector<float> tableau2;
    vector<float> tableau3;

    const int nb_ELTS = 25;


    for ( int i = 0; i < nb_ELTS; i++ )
    {
        tableau1.push_back(1.0 + i);
        tableau2.push_back(1.5 * i);
    }

    for ( int i = 0; i < nb_ELTS; i++ )
    {
        cout << "Valeur tableau1[" << i << "] : " << tableau1[i] << " et valeur tableau2[" << i << "] : " << tableau2[i] << endl;
    }

    for ( int i = 0; i < nb_ELTS; i++ )
    {
        tableau3.push_back(tableau1[i]*tableau2[i]);
        cout << "Valeur tableau3[" << i << "] : " << tableau3[i] << endl;
    }

    for ( int i = 0; i < nb_ELTS; i++ )
    {
    double nb_carre;
    nb_carre = tableau3[i]*tableau3[i];
    tableau3[i] = nb_carre;
    cout << "Valeur du tableau3 au carré : tableau3[" << i << "] : " << tableau3[i] << endl;
}
    return 0;
}

