#include<stdio.h>
int main()
{
    int i,j=7,a=7;
    for (i = 1; i <= 9; i)
    {
        for (j = a; j >=a-2; j--)
        {
            printf("I=%d J=%d\n",i,j);
        }
        i+=2;
        j+=2;
        a+=2;
    }
    return 0;
}