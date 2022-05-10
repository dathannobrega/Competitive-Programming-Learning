#include <iostream>
#include <math.h>

using namespace std;


int main ()
{
    double a,aux,i;
    cin >> a;
    aux=1/2;
    for (i = 0; i <a; i++)
    {
        aux+=2;
        aux=1/aux;
    }
    
    cout.precision(10);
    cout.setf(ios::fixed);
    cout << aux+1 << endl;

    return 0;
}