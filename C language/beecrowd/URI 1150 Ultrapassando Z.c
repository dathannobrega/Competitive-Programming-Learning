#include<stdio.h>
int main (){
    int x,z,soma=0,i;
    scanf("%d %d",&x,&z);
    i=x;
    while (z<=x)
    {
        scanf("%d",&z);
    }

    for (i=1; i<z;)
    {   
        i+=x;
        x++;
        soma++;
    }
    printf("%d\n",soma);
    return 0;
}