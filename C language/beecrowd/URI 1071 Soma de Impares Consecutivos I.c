#include<stdio.h>
int main()
{
    int n1,n2,soma=0,i,aux;
    scanf("%d%d",&n1,&n2);
    if (n2>n1)
    {
        aux = n2;
        n2=n1;
        n1=aux;
    }
    for (i = n2; i< n1; i++)
    {
        if ( i%2!=0 && i>n2)
        {
            soma= i+ soma;
        }
    }
    printf("%d\n",soma);
    return 0;
}
