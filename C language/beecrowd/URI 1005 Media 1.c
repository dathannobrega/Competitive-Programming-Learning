#include<stdio.h>
//calcular media de 2 notas com pesos diferentes
int main(){
    double nota1,nota2;
    scanf("%lf %lf", &nota1,&nota2);
    printf("MEDIA = %0.5lf\n", (((nota1*3.5)+(nota2*7.5))/11));
    return(0);

}
