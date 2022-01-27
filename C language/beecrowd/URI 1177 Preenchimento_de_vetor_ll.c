#include<stdio.h>
#include<stdlib.h>
int main(){
    int t,i,j=0;
    int n[1000];
    scanf("%d",&t);
    for (i = 0; i <1000 ; i++)
    {
        if (t<=j)//uma validaçao para zerar o j caso ele seja o valor de T.
        {
            j=0;
        }
        n[i]=j;
        printf("N[%d] = %d\n",i,n[i]);
        j++;
    }
    return 0;
}