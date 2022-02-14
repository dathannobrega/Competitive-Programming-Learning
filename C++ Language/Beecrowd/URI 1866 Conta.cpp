#include <iostream>
using namespace std;

int main()
{
    int N, i, numero;
    cin >> N;
    for (i = 0; i < N; i++)
    {
        cin >> numero;
        if (numero % 2 == 0)
            cout << "0\n";
        else
            cout << "1\n";
    }

    return 0;
}