#include<stdio.h>
#include<stdlib.h>
int main (){
    int x,y,z=1,i;
    scanf("%d",&x);
    for (i = 1; i <=x; i++)
    {
                printf("%.d ",i);
                printf("%.d ",i*i);
                printf("%.d\n",i*i*i);
    }
    return 0;
}