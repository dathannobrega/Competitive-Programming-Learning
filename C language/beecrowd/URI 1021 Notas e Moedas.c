#include<stdio.h>
int main()
{
    double valor;
    int novo=0;
    scanf("%lf",&valor);
    novo = valor;
    printf("NOTAS:\n");

    novo = (int)valor/100;//////////////////////
    printf("%d nota(s) de R$ 100.00\n",novo);//DEFININDO NOTA 100
    valor = valor-(novo*100);/////////////////

    novo = (int)valor/50;///////////////////////
    printf("%d nota(s) de R$ 50.00\n",novo);//DEFININDO NOTA 50
    valor = valor-(novo*50);//////////////////

    novo = (int)valor/20;///////////////////////
    printf("%d nota(s) de R$ 20.00\n",novo);//DEFININDO NOTA 20
    valor = valor-(novo*20);//////////////////

    novo = (int)valor/10;///////////////////////
    printf("%d nota(s) de R$ 10.00\n",novo);//DEFININDO NOTA 10
    valor = valor-(novo*10);///////////////////

    novo = (int)valor/5;////////////////////////
    printf("%d nota(s) de R$ 5.00\n",novo);//DEFININDO NOTA 5
    valor = valor-(novo*5);///////////////////

    novo = (int)valor/2;////////////////////////
    printf("%d nota(s) de R$ 2.00\n",novo);//DEFININDO NOTA 2
    valor = valor-(novo*2);///////////////////
    //AQUI COMEÇA AS MOEDAS
    valor*=100;
    printf("MOEDAS:\n");
    novo = (int)valor/100;////////////////////////
    printf("%d moeda(s) de R$ 1.00\n",novo);//DEFININDO MOEDA 100
    valor = valor-(novo*100);///////////////////

    novo = (int)valor/50;////////////////////////
    printf("%d moeda(s) de R$ 0.50\n",novo);//DEFININDO MOEDA 50c
    valor = valor-(novo*50);///////////////////

    novo = (int)valor/25;////////////////////////
    printf("%d moeda(s) de R$ 0.25\n",novo);//DEFININDO MOEDA 25c
    valor = valor-(novo*25);///////////////////

    novo = (int)valor/10;////////////////////////
    printf("%d moeda(s) de R$ 0.10\n",novo);//DEFININDO MOEDA 10c
    valor = valor-(novo*10);///////////////////

    novo = (int)valor/5;////////////////////////
    printf("%d moeda(s) de R$ 0.05\n",novo);//DEFININDO MOEDA 5c
    valor = valor-(novo*5);///////////////////

    printf("%.0lf moeda(s) de R$ 0.01\n",valor);//DEFININDO MOEDA 1c
    return 0;
}