#include <iostream>

using namespace std;

int main()
{
    int a, b, c, soma = 0, i;
    cin >> a;
    for (i = 0; i < a; i++)
    {
        cin >> b >> c;
        soma += (b / c) + (b % c);

        cout << soma << endl;
        soma = 0;
    }

    return 0;
}