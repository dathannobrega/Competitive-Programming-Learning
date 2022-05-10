#include <stdio.h>

int main (){
    double a,b,c=100;
    scanf("%lf %lf",&a ,&b);
    c= c+(c*a/100);

    printf("%.6lf\n", c+(c*b/100)-100);
    return 0;
}