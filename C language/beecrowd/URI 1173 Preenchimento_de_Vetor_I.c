#include<stdio.h>
int main (){
    int n[10],i,x;
    scanf("%d",&x);
    for (i = 0; i <10; i++)
    {
        n[i]= n[i-1]*(2);
        if (i==0)//para o primeiro vetor sempre se X.
        {
            n[i]=x;
        }
    }
    for (i = 0; i < 10; i++)
    {
        printf("N[%d] = %d\n",i,n[i]);
    }
    return 0;
}