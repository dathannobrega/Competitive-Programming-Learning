#include <iostream>
using namespace std;

int main()
{
    int N, a, b, c, d, e, soma = 0;
    cin >> N >> a >> b >> c >> d >> e;

    if (a == N)
        soma++;
    if (b == N)
        soma++;
    if (c == N)
        soma++;
    if (d == N)
        soma++;
    if (e == N)
        soma++;
    cout << soma << endl;
    return 0;
}