#include <iostream>

using namespace std;

int main()
{
    int i, N, afirm = 0;
    cin >> N;
    int a[N];

    for (i = 0; i < N; i++)
    {
        cin >> a[i]; // preenchimento vetor
    }

    for (i = 0; i < N; i++)
    {
        if (i==N-1)//Nao vai precisar acessar o ultimo vetor mais ele ja foi escaneado
            break;
        if (a[i] > a[i + 1])
        {
            afirm = i + 2; // pois a posiçao no exercicio começa no 1
            break;
        }
    }
    cout << afirm << endl;
    return 0;
}