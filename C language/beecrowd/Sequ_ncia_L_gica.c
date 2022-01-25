#include<stdio.h>
int main ()
{
    double value,i;
    scanf("%lf",&value);
    for (i = 1; i <=value; i++)
    {
        printf("%.0lf %.0lf %.0lf\n",i,(i*i),(i*i*i));
        printf("%.0lf %.0lf %.0lf\n",i,(i*i)+1,(i*i*i)+1);
    }
    return 0;
}