#include<stdio.h>
/*Fa�a um programa que calcule e mostre o volume de uma esfera sendo fornecido o valor de seu raio (R).
 A f�rmula para calcular o volume �: (4/3) * pi * R3. Considere (atribua) para pi o valor 3.14159.

Dica: Ao utilizar a f�rmula, procure usar (4/3.0) ou (4.0/3), pois algumas linguagens (dentre elas o C++),
assumem que o resultado da divis�o entre dois inteiros � outro inteiro.
*/
int main ()
{
    double raio;
    scanf("%lf", &raio);
    printf("VOLUME = %.3lf\n", (4.00/3*3.14159*raio*raio*raio));
    return(0);
}
