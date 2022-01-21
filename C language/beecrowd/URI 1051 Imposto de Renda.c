#include<stdio.h>
int main()
{
    float min=0.08,mid=0.18,max=0.28,a;
    scanf("%f", &a);
    if (a>=0 && a<=2000)
    {
        printf("Isento\n");
    }else if (a>2000 && a<=3000)
    {
        a=((a-2000)*min);
        printf("R$ %.2f\n",a);
    }else if (a>3000 && a<=4500)
    {
        a=(1000*min)+((a-3000)*mid);
        printf("R$ %.2f\n",a);
    }else if (a>4500)
    {
        a=(1000*min)+(1500*mid)+((a-4500)*max);
        printf("R$ %.2f\n",a);
    }
    return 0;
}