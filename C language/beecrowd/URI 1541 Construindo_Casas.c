# include <stdio.h>
#include <math.h>

int main ()
{
    double a,b,c,soma,area_total;
    do
    {
        scanf("%lf",&a);
        if (a==0)
            break;
        scanf("%lf %lf",&b,&c);
        area_total = 100/c;
        soma = a*b*area_total;
        printf("%.0lf\n",floor(sqrt(soma)));//arredonda pra baixo o quadrado da soma
    } while (1);

    return 0;
}