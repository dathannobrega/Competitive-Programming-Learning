#include <iostream>
using namespace std;

int main()
{
    int n, i, j;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> j;
        if (j > 8000)
            cout << "Mais de 8000!\n";
        else
            cout << "Inseto!\n";
    }

    return 0;
}