#include<stdio.h>
int main ()
{
    int n,x,i,in=0,out=0,value;
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&value);
        if (value>=10 && value<=20)
        {
            in++;
        }else
        {
            out++;
        }
    }
    printf("%d in\n",in);
    printf("%d out\n",out);
    return 0;
}