#include<stdio.h>
int main ()
{
    int j,i=1;
    for (j = 60; j >= 0; j)
    {
        printf("I=%d",i);
        printf(" J=%d\n",j);
        j-=5;
        i+=3;
    }
    return 0;
}
