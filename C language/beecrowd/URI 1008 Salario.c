#include<stdio.h>
/*Escreva um programa que leia o número de um funcionário, seu número de horas
trabalhadas, o valor que recebe por hora e calcula o salário desse funcionário.
A seguir, mostre o número e o salário do funcionário, com duas casas decimais.
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
