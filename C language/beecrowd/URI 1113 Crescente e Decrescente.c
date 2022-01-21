#include<stdio.h>
int main()
{
    int a,b,i,aux;
    
    for (i = 0; EOF; i++)
    {
        scanf("%d%d",&a,&b);
        if (b>a)
        {
            printf("Crescente\n");
        }else if (a>b)
        {
            printf("Decrescente\n");
        }
        if (a==b)
        {
            break;
        }
    }
    return 0;
}