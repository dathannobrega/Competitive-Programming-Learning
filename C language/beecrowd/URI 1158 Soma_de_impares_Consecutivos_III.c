#include <stdio.h>
 
int main() {
    int n,y,x,i,j,k;
    scanf("%d",&n);
    for (k = 0; k < n; k++)
    {
        scanf("%d %d",&y,&x);
        //x somas de impares a partir de y
        //adiciona 1 caso x seja par.
        if (y%2==0)
        {
            y++;
        }
        j=0;//reset a variavel para proximos loops
        //o j variavel neutra, tem q ser adicionadas pelos proximos x impares
        //variaveis para quebrar o segundo for
        int a=0,b=x;
        for (i = y; a<x; i+=2)
        {
            if (i%2!=2)
            {
                j+=i;
                a++;
            }
        }
        printf("%d\n",j);
    }
    return 0;
}