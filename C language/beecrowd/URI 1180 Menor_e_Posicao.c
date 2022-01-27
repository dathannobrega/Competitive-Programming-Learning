#include<stdio.h>
int main(){
    int n,i,pos=0,min;
    scanf("%d",&n);
    int vetor[n];
    for (i = 0; i <n; i++)
    {
        scanf("%d",&vetor[i]);
        if (i==0)
        {
            min=vetor[0];
        }
        
        if (vetor[i]<min)
        {
            min=vetor[i];
            pos=i;
        }
    }
    printf("Menor valor: %d\n",min);
    printf("Posicao: %d\n",pos);
    return 0;
}