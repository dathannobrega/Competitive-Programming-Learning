//Ler um número inteiro N e calcular todos os seus divisores.
#include<stdio.h>
int main()
{
    int a,i;
    scanf("%d",&a);
    for (i = 1; i <=a; i++)
    {
        if (a%i==0)
        {
            printf("%d\n",i);
        }
        
    }
    return 0;
}