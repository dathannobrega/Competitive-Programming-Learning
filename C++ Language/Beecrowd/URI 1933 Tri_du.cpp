#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    if (a == b)
        cout << b << endl;
    if (a > b){
        cout << a << endl;
    }
    else if (b > a){
        cout << b << endl;
    }
    return 0;
}