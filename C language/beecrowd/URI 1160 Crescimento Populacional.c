#include <stdio.h>
int main()
{

    int x, i, PopA, PopB, anos=0;
    double G1, G2;
    scanf("%d", &x);
    for (i = 0; i < x; i++)
    {
        scanf("%d %d %lf %lf", &PopA, &PopB, &G1, &G2);
        //programa vai rodar ate a populaçao A for maior q B, ou ate quebrar
        for (; PopA <= PopB;)
        {
            if (anos >100)
            {//quando o numero for maior q cem break o loop
                break;
            }
            PopA = PopA + (PopA * (G1 / 100));//convertendo  os G1/G2 em porcentagem
            PopB = PopB + (PopB * (G2 / 100));
            anos++;
        }
        if (anos <= 100)
        {
            printf("%d anos.\n", anos);
        }else {//se for maior que 100 printe mais de um seculo
            printf("Mais de 1 seculo.\n");
        }
        anos = 0;
    }
    return 0;
}