#include <stdio.h>
int main()
{
    int x, soma = 0, i, a = 0, b = 1;
    scanf("%d", &x);
    for (i = 1; i <=x; i++)
    {
        soma +=a;
        a = b;
        b = soma;
        if (i==x)
        {
            printf("%d\n", soma);
            break;
        }
        printf("%d ", soma);
    }
    return 0;
}