#include<stdio.h>
/*Escreva um programa que leia o n�mero de um funcion�rio, seu n�mero de horas
trabalhadas, o valor que recebe por hora e calcula o sal�rio desse funcion�rio.
A seguir, mostre o n�mero e o sal�rio do funcion�rio, com duas casas decimais.
*/
int main()
{
    int func,horas;
    float salario;
    scanf("%d %d %f", &func, &horas, &salario);
    printf("NUMBER = %d\n",func);
    printf("SALARY = U$ %.2f\n",salario*horas);
    return(0);
}
