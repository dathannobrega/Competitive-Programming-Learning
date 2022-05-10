#include <iostream>

using namespace std;


#define pres(x) cout.precision(x)

int main (){
    double a,b;
    a = 234.345;
    b = 45.698;
    pres(6);
    cout.setf(ios::fixed);
    cout << a <<" - " << b << endl;
    pres(0);
    cout << a <<" - " << b << endl;
    pres(1);
    cout << a <<" - " << b << endl;
    pres(2);
    cout << a <<" - " << b << endl;
    pres(3);
    cout << a <<" - " << b << endl;
    cout.unsetf(ios::fixed);
    pres(6);
    cout.setf(ios::scientific);
    cout << a <<" - " << b << endl;
    cout << uppercase << a <<" - " << b  << endl;
    cout.unsetf(ios::scientific);
    pres(3);
    cout.setf(ios::fixed | ios::showbase);
    cout << a <<" - " << b << endl;
    cout << a <<" - " << b << endl;
    return 0;
} 