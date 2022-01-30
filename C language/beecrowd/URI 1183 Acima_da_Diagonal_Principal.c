#include <stdio.h>
int main()
{
    double M[12][12], soma = 0,saber=0;
    char c;
    int i, j;
    scanf("%c", &c);
    for (i = 0; i < 12; i++)
    {
        for (j = 0; j < 12; j++)
        {
            scanf("%lf", &M[i][j]);

            if (j>0+i)
            {
                soma += M[i][j];
                saber++;
            }
        }
    }
    if (c == 'M')
    {
        printf("%.1lf\n", soma / 66);
    }
    else
    {
        printf("%lf\n", soma);
    }
    return 0;
}