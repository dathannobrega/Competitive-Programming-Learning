#include <stdio.h>
#include <string.h>

int main ()
{
    int a1,a2,soma,i,N;
    char nome1[50],nome2[50],esc1[6],esc2[6];
    scanf("%d",&N);
    for (i = 0; i < N; i++)
    {
        scanf("%s %s %s %s %d %d",&nome1,&esc1,&nome2,&esc2,&a1,&a2);
        soma = a1+a2;

        if (strcmp(esc1,"PAR")==0)//começa as comparaçoes com a escolha 1
        {
            if (soma%2==0)
                printf("%s\n",nome1);//se for par o nome1 ganha
            else 
                printf("%s\n",nome2);//se for par o nome 2 ganha
        }else{//se o nome1 pedir Impar
            if (soma%2==0)
                printf("%s\n",nome2);//se for par o nome 2 ganha
            else
                printf("%s\n",nome1);//se for par o nome1 ganha
        }
    }
    return 0;
}