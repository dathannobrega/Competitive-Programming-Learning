#include <iostream>
#include <math.h>

using namespace std;

int main ()
{
    int n;
    double min,max;
    cin >> n;

    min = n/log (n);
    max = 1.25506*(min);

    cout.precision(1);
    cout.setf(ios::fixed);
    cout << min << " " << max << endl;
    return 0;
}