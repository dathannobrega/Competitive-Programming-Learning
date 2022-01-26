#include<stdio.h>
int main()
{
    float x=3,i=2,y=1;
    for (; x < 39; i*=2,x+=2)
    {
        y=y+(x/i);
    }
    printf("%.2lf\n",y);
    return 0;
}