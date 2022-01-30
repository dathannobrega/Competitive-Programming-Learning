#include <stdio.h>
int main()
{
    double M[12][12], soma = 0;
    char oper; // um char para Receber se vai ser Soma Ou media
    int i, j, linha;
    scanf("%d %c", &linha,&oper); // DEIXAR de preferencia OS SCARNS JUNTO!!!!!!
    for (i = 0; i < 12; i++)
    {

        for (j = 0; j < 12; j++)
        {
            scanf("%lf", &M[i][j]);
            if (i == linha)
            {
                soma += M[i][j];
            }
        }

    } // Aki faz o uso do char escaneado na linha 7 para definir a funçao
    if (oper == 'M')
    {
        printf("%.1lf\n", soma / 12);
    }
    else
    {
        printf("%.1lf\n", soma);
    }
    return 0;
} // TENTEI COLOCAR setbuf(stdin,NULL); dps dos Scanf, mais o codigo quebra!!
