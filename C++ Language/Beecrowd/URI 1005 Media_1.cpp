#include <iostream>
using namespace std;

int main (){
    float a,b;
    cin >> a >> b;
    cout.precision(5);
    cout.setf(ios::fixed);

    cout << "MEDIA = " << ((a*3.5)+(b*7.5))/11 << endl;
    return 0;
}