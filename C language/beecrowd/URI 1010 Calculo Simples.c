#include<stdio.h>
/*Neste problema, deve-se ler o c�digo de uma pe�a 1, o n�mero de pe�as 1,
o valor unit�rio de cada pe�a 1, o c�digo de uma pe�a 2, o n�mero de pe�as 2
e o valor unit�rio de cada pe�a 2. Ap�s, calcule e mostre o valor a ser pago.
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
