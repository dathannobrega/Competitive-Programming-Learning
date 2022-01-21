#include<stdio.h>
int main()
{
    char animal;
    int testes,i,valor;
    float c_total,s_total,r_total;
    //testes é o valor N(numeros de experientos)
    scanf("%d",&testes);
    for (i = 0; i < testes; i++)
    {
        scanf("%d %c",&valor,&animal);
        if (animal=='C')//se for coelho o valor é acrecentado em coelho
        {
            c_total+=valor;
        }else if (animal=='R')//se for rato o valor e´acrecentado em ratos
        {
            r_total+=valor;
        }else//se nao for rato ou coelho+ os animais é acrecentado em sapo
        {
            s_total+=valor;
        }
    }
    printf("Total: %.0f cobaias\n",r_total+s_total+c_total);
    printf("Total de coelhos: %.0f\n",c_total);
    printf("Total de ratos: %.0f\n",r_total);
    printf("Total de sapos: %.0f\n",s_total);
    printf("Percentual de coelhos: %.2f %%\n",(c_total/(r_total+s_total+c_total))*100);
    printf("Percentual de ratos: %.2f %%\n",(r_total/(r_total+s_total+c_total))*100);
    printf("Percentual de sapos: %.2f %%\n",(s_total/(r_total+s_total+c_total))*100);
    return 0;
}