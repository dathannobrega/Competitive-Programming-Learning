#include <stdio.h>
#include<iostream>
using namespace std;

int main ()
{
    double V,D,n=3.14,Altura,Area;
    while (scanf("%lf %lf",&V,&D) != EOF)
    {
        Area= 3.14*((D/2)*(D/2));
        Altura=V/(n*(D/2)*(D/2));
        printf("ALTURA = %.2lf\nAREA = %.2lf\n",Altura,Area);
    }
    
    return 0;
}
// - Qual deve ser a altura(em cm) da parte interna do recipiente;
// - A área(em cm2) da boca(entrada) do recipiente.
// Vt= π r² h
//Ab=Pi*r^2
//AL=2*Pi*r*h