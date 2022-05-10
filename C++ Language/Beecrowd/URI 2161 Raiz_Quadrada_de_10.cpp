#include <iostream>
#include <math.h>

using namespace std;

int main ()
{
    double a,i,soma,aux;
    cin >> a;

    cout.precision(10);
    cout.setf(ios::fixed);
    aux=1/6;
    for (i = 0; i < a; i++)
    {
        aux +=6;
        aux=1/aux;
    }
    
        cout << aux+3;

    //cout << continuada(a) << endl;

    return 0;
}