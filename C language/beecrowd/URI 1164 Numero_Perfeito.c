#include <stdio.h>
 
int main() {
    int N,i,x,j,soma;
    scanf("%d",&N);
    for (i = 0; i < N; i++)
    {
        scanf("%d",&x);
        for (j = 1; j <x; j++)
        {//pega todos os numeros divisiveis por X exceto X, e soma.
            if (x%j==0)
            {
                soma+=j;
            }
        }//faz a confirmaçao se x é perfeito, comparando-o com o valor x.
        if (soma==x)
        {
            printf("%d eh perfeito\n",x);
        }else
        {
            printf("%d nao eh perfeito\n",x);
        }//reseta as variaveis para os proximos loops.
        soma=0;
        j=0;
    }
    
    return 0;
}