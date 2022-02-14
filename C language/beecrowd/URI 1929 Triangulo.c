#include <stdio.h>

int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if (a < b + c && b < a + c && c < a + b)//TODOS OS CASOS PARA O TRIANGULO SER POSSIVEL
        printf("S\n");
    else if (d < b + c && b < d + c && c < d + b)//TODOS OS CASOS PARA O TRIANGULO SER POSSIVEL
        printf("S\n");
    else if (a < d + c && d < a + c && c < a + d)//TODOS OS CASOS PARA O TRIANGULO SER POSSIVEL
        printf("S\n");
    else if (a < b + d && b < a + d && d < a + b)//TODOS OS CASOS PARA O TRIANGULO SER POSSIVEL
        printf("S\n");
    else
        printf("N\n");

    return 0;
}