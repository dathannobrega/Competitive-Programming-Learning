#include <stdio.h>
 
int main() {
    int n[20],i,aux,atualiza;
    for (i = 0; i < 20; i++)
    {
        scanf("%d",&n[i]);
    }//o primeito termo deve ser subistituido pelo ultimo,o segundo pelo penutimo.
    for (atualiza=0,i=19; i >=0; i--,atualiza++)
    {//ENQUANTO i FOR MAIOR OU Igual a 0 Ira apenas printar.
        if (i>=0)
        {
            printf("N[%d] = %d\n",atualiza,n[i]);
        }else
        {//FAZER SUBISTITUIÇAO PADRAO PARA OS VETORES.
        aux=n[i];//aux= 5...aux=23
        n[i]=n[atualiza];//n[19]=-54...n[18]=-78
        n[atualiza]=aux;//n[0]=5...n[1]=23
        printf("N[%d] = %d\n",atualiza,n[i]);
        }
    }
    return 0;
}