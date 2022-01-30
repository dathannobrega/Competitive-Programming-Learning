#include<stdio.h>
int main (){
    int x,y,i;
    scanf("%d %d",&x,&y);
    for (i=1;  i<=y; i++)//O valor que o numero vai chegar ex. ate 99.
    {
        printf ("%d",i);
        if (!(i%x==0))// se o numero nao for final de x, ele apenas da espaço
        {
            printf(" ");
        }
        if (i%x==0)// se for o ultimo numero da linha ele corta a linha.
        {
            printf("\n");
        }
    }
    return 0;
}