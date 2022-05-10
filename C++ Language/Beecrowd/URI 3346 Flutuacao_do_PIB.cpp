#include <iostream>
#include <math.h>
using namespace std;

int main ()
{
    double a,b,c=100;
    cin >> a >> b;
    c=c+(c*a/100);
    cout.precision(6);
    cout.setf(ios::fixed);

    cout << c+(c*b/100)-100 << endl;


}