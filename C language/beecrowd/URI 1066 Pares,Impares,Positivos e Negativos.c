#include<stdio.h>
int main()
{
    int par=0,impar=0,pos=0,neg=0,i,valor=0;
    for (i = 0; i <5; i++)
    {
        scanf("%d",&valor);
        //se for positivo ou negativo
        if (valor>0){
            pos++;
        }else if (valor<0)
        {
            neg++;
        }//abaixo se for par ou impar
        if (valor%2==0){
            par++;
        }else{
            impar++;
        }
    }
    printf("%d valor(es) par(es)\n",par);
    printf("%d valor(es) impar(es)\n",impar);
    printf("%d valor(es) positivo(s)\n",pos);
    printf("%d valor(es) negativo(s)\n",neg);
    return 0;
}