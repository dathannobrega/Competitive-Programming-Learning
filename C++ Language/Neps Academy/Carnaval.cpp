#include <iostream>

using namespace std;

int main()
{
    float a, soma = 0, max = 0, min = 20;
    for (int i = 0; i < 5; i++)
    {
        cin >> a;
        soma += a;
        if (a > max)
            max = a;
        if (a < min)
            min = a;
    }
    
    soma -= max;
    cout.precision(1);
    cout.setf(ios::fixed);
    cout << soma - min << endl;

    return 0;
}