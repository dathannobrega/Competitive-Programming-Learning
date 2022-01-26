#include<stdio.h>
int main(){
    int n,div=0;
    float soma=0;
    while (1)
    {
        scanf("%d",&n);
        if (n>0)
        {
            soma+=n;
            div++;
        } 
        else if (n<0)
        {
            break;
        }
    }
    printf("%.2f\n",soma/(float)div);
    return 0;
}