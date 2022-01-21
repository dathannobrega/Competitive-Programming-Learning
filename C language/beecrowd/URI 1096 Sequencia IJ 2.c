#include<stdio.h>
int main ()
{
    int i,h,j;
    for ( i = 1; i <= 9; i)
    {
        for (j = 7; j >=5; j)
        {
            printf("I=%d J=%d\n",i,j);
            j--;

        }
        i+=2;
    }
    return 0;
}
