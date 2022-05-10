#include <stdio.h>

int main()
{
    int a, a1, b, soma = 1, i, j;
    scanf("%d", &a);
    for (i = 0; i < a; i++)
    {
        scanf("%d", &a1);
        for (j = 0; j < a1; j++)
        {
            scanf("%d", &b);
            soma += b - 1;
        }
        printf("%d\n", soma);
        soma = 1;
    }
    return 0;
}