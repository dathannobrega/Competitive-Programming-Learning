#include <stdio.h>

int main (){
    int a,b,i;
    scanf("%d",&a);
    for (i = 1; i <= a; i++)
    {
        scanf("%d",&b);
        printf("resposta %d: %d\n",i,b);
    }
    
    return 0;
}