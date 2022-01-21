#include<stdio.h>
/*Leia quatro valores inteiros A, B, C e D. A seguir, calcule e mostre a
diferença do produto de A e B pelo produto de C e D segundo a fórmula: DIFERENCA = (A * B - C * D).
*/
int main(){
    int A,B,C,D;
    scanf("%d %d %d %d", &A, &B, &C, &D);
    printf("DIFERENCA = %d\n", ((A*B)-(C*D)));
    return(0);

}
