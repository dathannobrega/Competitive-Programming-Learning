#include <stdio.h>

int main()
{
    //Double pois o maximo possivel para um int é 47 o  numero de fibonacci. + que isso deve ser um double.
    int i, t, x,j,a1=0,a2=0,soma;
    double n[61];
    scanf("%d", &x);
    for (i = 0; i < x; i++)
    {
        n[0]=0;
        n[1]=1;
        scanf("%d",&t);
        //como ja tem valores para o vetor de posiçao 0 e 1 podemos começar com j=2.
        for (j = 2; j <=t; j++)
        {
            n[j] = n[j-1] + n[j-2];
            if (j==t)
            {
                printf("Fib(%d) = %.0lf\n",j,n[j]);
            }
        }//caso queira saber t de 0 ou 1, os valores seram igual t.
        if (t==0||t==1)
        {
            printf("Fib(%d) = %d\n",t,t);
        }
    }
    return 0;
}