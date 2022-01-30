#include <iostream>
using namespace std;
int main(){
    double pi=3.14159,raio;
    cin>> raio;
    cout.precision(4);
    cout.setf(ios::fixed);

    cout << "A=" << raio*raio*pi << endl;
    return 0;
}
