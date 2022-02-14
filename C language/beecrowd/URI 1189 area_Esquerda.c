#include <stdio.h>

int main()
{
    double M[12][12], soma = 0;
    char op;
    int i, j;
    scanf("%c", &op);
    for (i = 0; i < 12; i++)
    {
        for (j = 0; j < 12; j++)
        {

            scanf("%lf", &M[i][j]);
            if ((j < 5 && j < i)&& i<6)// faz a primeira metade do vetor
            {

                soma += M[i][j];
            }if ((i>5 && j<11-i))// faz a segunda metade do vetor
            {
                soma+= M[i][j];
            }
            
        }
    }
    if (op == 'M')// de acordo com a operaçao escolhida na linha 8, faz o print
    {
        printf("%.1lf\n", soma / 30);
    }else
    {
        printf("%.1lf\n",soma);
    }
    return 0;
}