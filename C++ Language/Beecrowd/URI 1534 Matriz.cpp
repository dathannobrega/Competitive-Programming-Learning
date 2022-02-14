#include <stdio.h>
using namespace std;

int main()
{
    int i, j, N;
    while (scanf("%d", &N) != EOF)
    {
        int M[N][N];
        for (i = 0; i < N; i++)
        {
            for (j = 0; j < N; j++)
            {
                M[i][j] = 3;
                if (j == i) // DIAGONAL ESQUEDA PARA DIREITA PREENCHIDA COM 1
                    M[i][j] = 1;
                if (j == (N - 1) - i) // DIAGONAL DIREITA PARA ESQUERDA PREENCHIDA COM 2
                    M[i][j] = 2;
                if (j == (N - 1)) // IF PARA PRINTAR
                    printf("%d\n", M[i][j]);
                else
                    printf("%d", M[i][j]);
            }
        }
    }
    return 0;
}