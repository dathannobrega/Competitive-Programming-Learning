#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    cout.precision(1);
    cout.setf(ios::fixed);
    cout << "MEDIA = " << (a * 2 + b * 3 + c * 5) / 10 << endl;
    return 0;
}