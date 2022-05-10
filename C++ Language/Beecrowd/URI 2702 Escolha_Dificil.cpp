#include <iostream>
using namespace std;

int main()
{
    int a, b, c, a1, b1, c1, soma = 0;
    cin >> a >> b >> c >> a1 >> b1 >> c1;

    if (a1 > a)
        soma += a1 - a;
    if (b1 > b)
        soma += b1 - b;
    if (c1 > c)
        soma += c1 - c;

    cout << soma << endl;

    return 0;
}