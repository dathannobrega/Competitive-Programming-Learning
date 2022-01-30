#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int i, y;
    double x;
    cin >> y;

    cout.precision(4);
    cout.setf(ios::fixed);
    for (i = 0; i < y; i++)
    {
        cin >> x;
        cout << sqrt(x) << endl;
    }

    return 0;
}