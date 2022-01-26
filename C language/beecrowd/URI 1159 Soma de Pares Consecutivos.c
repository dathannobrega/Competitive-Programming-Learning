#include <stdio.h>
 
int main() {
    int x,i,soma=0,var=0;
    while(1){
        scanf("%d",&x);
        if (x==0)//se x for 0, quebra o programa.
        break;
        if (x%2!=0)//se x nao for impar,adicionamos mais 1 para ser par
            x++;
        //o programa deve rodar 5x, e somar os 5 numeros pares dps de x
        soma=0;//resetar a soma para as proximas equaçoes
        for ( i = x,var=0; var <5; i+=2)
        {
            soma+=i;
            var++;
        }
        printf("%d\n",soma);
    }
    return 0;
}