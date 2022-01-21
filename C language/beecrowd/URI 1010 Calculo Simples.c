#include<stdio.h>
/*Neste problema, deve-se ler o código de uma peça 1, o número de peças 1,
o valor unitário de cada peça 1, o código de uma peça 2, o número de peças 2
e o valor unitário de cada peça 2. Após, calcule e mostre o valor a ser pago.
*/
int main()
{
    int vezes;
    vezes = 1;
    while (vezes<3){
    int a1,b1,a2,b2;
    float valor1,valor2;
    scanf("%d %d %f", &a1,&b1,&valor1);
    scanf("%d %d %f", &a2,&b2,&valor2);
    printf("VALOR A PAGAR = R$ %.2f",(b1*valor1+b2*valor2));
    vezes++;
    }
    return(0);

}
