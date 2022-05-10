#include <iostream>
using namespace std;

int main()
{
    int N, i, j, v, somatotal = 0, somaH = 0, somaV = 0, somaIn = 0,somaIn2=0;
    cin >> N;

    int M[N][N];
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            cin >> M[i][j];
        }
        somatotal += M[i][j - 1];
    }

    for (i = 0; i < N; i++)
    {
        for (v = 0, j = 0; j < N; j++, v++)
        {
            somaH += M[i][j];
            somaV += M[j][i]; // inverte par afazer a contagem na vertical
            somaIn+= M[v][j];// SOma da Base inclinada
            somaIn2 += M[v][(N-1)-j];//INVERTIDO AO CONTRARIO
        }
        if ((somaH != somatotal) || (somatotal != somaV) || (somaIn != somatotal) || (somaIn2 != somatotal))
        {
            printf("-1\n");
            return 0;
        }
        somaH = 0;
        somaV = 0;
        somaIn = 0;
        somaIn2=0;
    }
    printf("%d\n", somatotal);
    return 0;
}