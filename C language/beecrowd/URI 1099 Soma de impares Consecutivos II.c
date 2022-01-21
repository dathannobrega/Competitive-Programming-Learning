#include<stdio.h>
int main()
{
    int n,x,y,aux,i,soma=0,j;
    scanf("%d",&n);
    for (i = 0; i < n; i++)
    {
        scanf("%d%d",&x,&y);
        if (y>x)
        {
            aux=x;
            x=y;
            y=aux;
        }
        for (j = y; j <x; j++)
        {
            if (j%2 != 0 )
            {
                soma= soma+j;
            }else{
                soma+=0;
            }
        }
        printf("%d\n",soma);
        soma=0;
    }
    return 0;
}
