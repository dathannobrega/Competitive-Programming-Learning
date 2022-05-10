#include <iostream>
using namespace std;

int main ()
{
    double a,pi=3.14;
    cin >> a;

    cout.precision(2);
    cout.setf(ios::fixed);
    cout << 2*pi*a<< endl;

//IMPORTANTE C=2πr<-- circuferencia de um circulo
    return 0;
}