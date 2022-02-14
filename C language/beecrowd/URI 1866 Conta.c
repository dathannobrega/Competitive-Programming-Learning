#include <stdio.h>

int main (){
    int N,i,soma=0,numero;
    scanf("%d",&N);
    for (i = 0; i < N; i++)
    {
        scanf ("%d",&numero);
        if(numero%2==0)//COmo a sequencia é so com 2 numeros é possivel realizar a conta sendo ele par = 0 impar =1
            printf("0\n");
        else
            printf("1\n");
    }
    return 0;
}