#include<stdio.h>
int main ()
{
    int x=0,i;
    float entrada,soma=0;
    for (i = 0; i <6; i++)
    {
        scanf("%f",&entrada);
        if (entrada>0)
        {
            x++;
            soma = soma+entrada;
        }
    }
    soma = soma/x;
    printf("%d valores positivos\n",x);
    printf("%.1f\n",soma);
    return 0;
}