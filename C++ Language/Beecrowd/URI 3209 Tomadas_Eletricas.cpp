#include <iostream>

using namespace std;

int main()
{
    int a, a1, b, soma = 1, i, j;
    cin >> a;
    for (j = 0; j < a; j++)
    {
        cin >> a1;
        for (i = 0; i < a1; i++)
        {
            cin >> b;
            soma += b-1;
        }
        cout << soma << endl;
        soma=1;
    }

    return 0;
}