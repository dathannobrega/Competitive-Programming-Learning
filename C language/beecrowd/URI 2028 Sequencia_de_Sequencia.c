#include <stdio.h>

int somatorio (int n)// funçao repercursao para ver quant numeros vao dar.
{
    int somaT;
    if(n==0)
        return (1);
    else{
        somaT = n + somatorio(n-1);
        return (somaT);
    }
}



int main ()
{
    int n,i,j=1,loops,casos=1,confirm;
    while(scanf("%d",&n)!= EOF){//o loop vai acontecer ate receber um EOF
        loops=somatorio(n);//loops vai ter o valor de somatorio, para nao ter que chamar a funçao toda hr
        if(n==0)
            printf("Caso %d: 1 numero\n",casos);//caso o numero seja 0;
        else
            printf("Caso %d: %d numeros\n",casos,loops);//demais casos;
        printf("0");
        for (i=0;i<n;i++,j++) {//aqui começa o preenchimento da sequencia 0,1,2,2,3,3,3,4,4,4,4...
            for (confirm=1; confirm<=j; confirm++) {
                if(confirm==i && i==n)//se for o ultimo numero do preenchimento, coloca \n
                    printf(" %d\n",j);
                else
                    printf(" %d",j);//demais casos à o espaço antes
            }
        }
        printf("\n\n");//para pular uma linha
        j=1;//reseta a variavel novamente;
        casos++;
    }
    return 0;
}