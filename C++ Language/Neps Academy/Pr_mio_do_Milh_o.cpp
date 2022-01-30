#include <iostream>
using namespace std;

int main()
{
    int a, soma = 0, i = 1, N;
    cin >> N;

    while (i <=N)
    {
        cin >> a;
        soma += a;
        if (soma >= 1000000)
        {
            cout << i;
            break;
        }
        i++;
    }
    return 0;
}