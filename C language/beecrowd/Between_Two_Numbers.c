#include <stdio.h>
int main()
{
    int i, a, b, aux;
    scanf("%d %d", &a, &b);
    if (b > a)
    {
        aux = a;
        a = b;
        a = aux;
    }

    for (i = a; i < b; i++)
    {
        printf("%d ", i);
    }
    printf("%d\n",i);
    return 0;
}
