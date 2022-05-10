//(2pi*R)*h + 2 pi.R^2 <<< AREA CILINDRO
#include<stdio.h>
#include<math.h>

int main()
{
    float pi=3.14;
    double V,D,area,altura;
    while (scanf("%lf %lf",&V,&D)!= EOF)//ex= 1450.00= (2*Pi*(D/2)) *h + 2(Pi*(D/2)^2)  
    {
        area = pi*pow((D/2),2);
        altura= ((V- (2*area))/(2*pi*(D/2)));

        printf("ALTURA = %.2lf\nAREA = %.2lf\n",altura,area);
    }       
    


}