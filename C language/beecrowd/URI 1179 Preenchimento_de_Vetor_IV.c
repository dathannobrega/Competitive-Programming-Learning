#include <stdio.h>

int main()
{
    int impar[5], par[5], x, i;
    int p = 0, im = 0; // contadores internos para definir localizaçao dos vetores
    for (i = 0; i < 15; i++)
    {
        scanf("%d", &x);
        // verifica se o numero X é par ou impar, em cada caso ele adiciona o numero a seu respectivo vetor
        if (x % 2 == 0)
        {
            par[p] = x;
            p++;
        }
        else
        {
            impar[im] = x;
            im++;
        }
        // NESSA PARTE os Contadores sao TESTADOS para ver se o Vetor ja Esta preenchido.
        if (p == 5)
        {
            for (p = 0; p < 5; p++)
            {
                printf("par[%d] = %d\n", p, par[p]);
            }
            // zera as variaveis de par
            p = 0;
        }
        else if (im == 5)
        {
            for (im = 0; im < 5; im++)
            {
                printf("impar[%d] = %d\n", im, impar[im]);
            }
            // zera as variaveis de impar
            im = 0;
        }
    }
    // Nessa parte trabalharemos oque sobrou, ja q visivel q nosso contadores nao estao zerados
    // rodo um While somente a quantidade de contadores sobrando.
    if (im != 0)
    {
        i = 0; // reseto essa variavel pq ja saiu do loop e ela nao tera mais funçao.
        while (i < im)
        {
            printf("impar[%d] = %d\n", i, impar[i]);
            i++;
        }
    }
    if (p != 0)
    {
        i = 0; // reseto essa variavel pq ja saiu do loop e ela nao tera mais funçao.
        while (i < p)
        {
            printf("par[%d] = %d\n", i, par[i]);
            i++;
        }
    }
    return 0;
}