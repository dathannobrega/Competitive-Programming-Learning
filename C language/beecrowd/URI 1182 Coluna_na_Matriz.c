#include <stdio.h>
int main()
{
    float vetor[12][12], somar=0;
    char oper;
    int i, j, coluna;
    scanf("%d %c", &coluna, &oper);
    for (i = 0; i < 12; i++)
    {
        for (j = 0; j < 12; j++)
        {
            scanf("%f", &vetor[i][j]);
            if (j == coluna)
            {
                somar += vetor[i][j];
            }
        }
    }
    if (oper == 'M')
    {
        printf("%.1f\n", somar / 12);
    }
    else
    {
        printf("%.1f\n", somar);
    }
    return 0;
}