#include <stdio.h>
int main()
{
    //vetor com 48 pois o maximo possivel para um int é o 47° numero de fibonacci. + que isso deve ser um float.
    int i, t, x,j,a1,a2;
    float n[100];
    scanf("%f", &x);
    for (i = 0; i < x; i++)
    {
        a1=0;
        a2=1;
        scanf("%f",&t);
        //como ja tem valores para o vetor de posiçao 0 e 1 podemos começar com j=2.
        for (j = 2; j <=t; j++)
        {
            n[j]= a1+a2;
            a1=a2;
            a2=n[j];
            if (j==t)
            {
                printf("Fib(%.0f) = %.0f\n",j,n[j]);
            }
        }//caso queira saber t de 0 ou 1, os valores seram igual t.
        if (t==0||t==1)
        {
            printf("Fib(%d) = %d\n",t,t);
        }
    }
    return 0;
}