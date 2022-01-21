#include<stdio.h>
int main()
{
    int a,i,aux=0,maior,pos;
    for (i = 1; i <=100; i++)
    {
        scanf("%d",&a);
    //toda vez que o numero for maior ele armazena é armazenado uma variavel
    //se nao for, o if nao acontece e nenhum valor é alterado.
        if (aux<a)
        {
            maior=a;
            pos = i;
            aux = a;
        }
    }
    printf("%d\n",maior);
    printf("%d\n",pos);
    return 0;
    
}