#include<iostream>

using namespace std;

int main(){
    int b,c;
    float a;
    cin >> a >> b >> c;
    cout.precision(2);
    cout.setf(ios::fixed);
    a= a/(b+c);

    cout << a <<endl;
}