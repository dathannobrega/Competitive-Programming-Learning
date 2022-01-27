#include <stdio.h>
 
int main() {
    int i;
    int valores[10];
    for(i=0;i<10;i++)
    {
    scanf("%d",&valores[i]);
    }
    for (i = 0; i < 10; i++)
    {
        if (valores[i]<=0)
        {
            valores[i]=1;
        }
        printf("X[%d] = %d\n",i,valores[i]);
    }
    
    return 0;
}