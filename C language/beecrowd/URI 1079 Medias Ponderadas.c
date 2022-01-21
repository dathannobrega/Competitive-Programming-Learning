#include<stdio.h>
int main()
{
    int n,i;

    scanf("%d",&n);
    for (i = 0; i < n; i++)
    {
        float a,b,c;
        scanf("%f%f%f",&a,&b,&c);
        printf("%.1f\n",(a*2+b*3+c*5)/10);
    }
    return 0;
}