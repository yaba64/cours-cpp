#include <iostream>
using namespace std ;

main()

{
    char op ;
    int n1, n2 ;

    cout << "op�ration souhait�e (+, - ou *) ? " ;
    cin >> op ;

    cout << "donnez 2 nombres entiers : " ;
    cin >> n1 >> n2;

    if (op == '+')
        cout << "leur somme est : " << n1+n2 << endl;
    else if (op == '-')
        cout << "leur diff�rence est : " << n1-n2 << endl;
    else
        cout << "leur produit est : " << n1*n2 << endl;

return 0;
}
