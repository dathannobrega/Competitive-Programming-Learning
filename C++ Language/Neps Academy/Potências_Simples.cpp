#include <iostream>
#include <math.h>
using namespace std;

int main(){
    double a,b,potencia;
    cin >> a>> b;
    potencia = pow(a,b);
    cout.precision(4);
    cout.setf(ios::fixed);
    cout << potencia << endl;
    return 0;
}