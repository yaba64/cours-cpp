#include <iostream>
using namespace std;
//: C03:PassAddress.cpp
void f(int &p)
{
    cout << "p = " << p << endl;

    p = 5;
    cout << "p = " << p << endl;
}
int main()
{
    int x = 47;
    cout << "x = " << x << endl;
    cout << "&x = " << &x << endl;
    f(x);
    cout << "x = " << x << endl;
}
