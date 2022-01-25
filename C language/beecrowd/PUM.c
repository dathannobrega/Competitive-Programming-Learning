#include<stdlib.h>
#include<stdio.h>
int main ()
{
    int x,i=0,j,y=3,valor=1;
    scanf("%d",&x);
    for ( i = 0; i < x; i++)
    {
        for ( j = valor; j <= y; j++)
        {
            printf("%d ",j);
        }
        printf("PUM\n");
        valor+=4;
        y+=4;
    }
    return 0;
}