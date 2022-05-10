#include <iostream>

using namespace std;

int main()
{
    int N, i, valid = 1;
    ;
    cin >> N;
    int a[N];

    for (i = 0; i < N; i++)
    {
        cin >> a[i];
    }

    for (i = 0; i < N; i++)
    {
        if (i == N - 3)// menos 3 pois a verificaçao é feita em 3 numeros a frente
        {
            if (a[i] == a[i + 1] || (a[i] > a[i + 1] && a[i + 1] > a[i + 2]) || (a[i] < a[i + 1] && a[i + 1] < a[i + 2]))
            {
                valid = 0;
                break;
            }
        }
        else if (a[i] == a[i + 1])
        {
            valid = 0;
            break;
        }
    }
    cout << valid << endl;
    return 0;
}