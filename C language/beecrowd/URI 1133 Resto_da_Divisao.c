#include <stdio.h>
#include<stdlib.h>
 
int main() {
    int x,y,aux,soma;
    scanf("%d %d",&x,&y);
    if (y>x)
    {
        aux=x;
        x=y;
        y=aux;
        y+=1;
    }else if (x>y)
    {
        y+=1;
    }
    
    for (y; y < x; y++)
    {
        if (y%5==3 || y%5==2)
        {
            printf("%d\n",y);
        }
    }
    return 0;
}