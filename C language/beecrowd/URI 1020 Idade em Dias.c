#include<stdio.h>
int main()
{
    int dia,mes,ano,rest;
    scanf("%d",&dia); //definir numero de dias
    rest=dia;
    ano = dia/365; //defini o numero de anos dividnindo os dias por 365
    rest= rest-(ano*365);// subtrai os dias dos anos para descobrir os meses restantes
    mes = rest/30;// divide os dias restante do ano para saber quantos meses possui
    rest= rest-(mes*30);// subtrai os meses do dos dias para saber quando dias sobram
    dia = rest;//defini os dias como o restante de todos os descontos
    printf("%d ano(s)\n",ano);
    printf("%d mes(es)\n",mes);
    printf("%d dia(s)\n",dia);
    return 0;

}
