#include<stdio.h>
int main()
{
    int i,senha;
    for (i = 0; EOF ; i++)
    {
        scanf("%d",&senha);
        if (senha==2002)
        {
            printf("Acesso Permitido\n");
            break;
        }else
        {
            printf("Senha Invalida\n");
        }
        
        
    }
    return 0;
}