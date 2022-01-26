#include <stdio.h>
 
int main() {
    int N,j,x,i,validador;
    scanf("%d",&N);
    for (i = 0; i < N; i++)
    {
        scanf("%d",&x);
//resetando 0 validador para proximos casos
        validador=0;
        for (j = 1; j <=x; j++)
        {
            if (x%j==0)
            {//toda vez q for divisilve aumenta um ponto
                validador++;
            }
        }//como um primo so tem 2 divisores, apenas os numeros com 2 validaçoes serao primo.
        if (validador==2||validador==1 )
        {
            printf("%d eh primo\n",x);
        }else
        {
            printf("%d nao eh primo\n",x);
        }
    }
    return 0;
}