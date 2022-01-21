#include<stdio.h>
int main ()
{
    int m,n,i,aux,j,soma=0;
    for (j = 0; j < 3; j++)
    {
        scanf("%d%d",&m,&n);
        if (n>m)
        {
        aux=n;
        n=m;
        m=aux;
        }if (!(n==0 ||m==0))
        {
            for (i = n; i <= m; i++)
            {
            printf("%d ",i);
            soma+=i;
            }
        }
        printf("Sum=%d\n",soma);
        soma=0;
    }
    return 0;
}