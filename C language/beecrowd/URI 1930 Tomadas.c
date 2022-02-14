#include <stdio.h>

int main()
{
    int a, b, c, d, aparelhos;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    aparelhos = ((a - 1) + (b - 1) + (c - 1) + d); // a ultima tomada ficará com todos os slot livre.
    printf("%d\n", aparelhos);

    return 0;
}