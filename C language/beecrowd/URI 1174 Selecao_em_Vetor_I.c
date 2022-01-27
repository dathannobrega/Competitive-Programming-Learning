#include <stdio.h>

int main()
{

    int i;
    float n[100];
    for (i = 0; i < 100; i++)
    {
        scanf("%f", &n[i]);
    }
    for (i = 0; i < 100; i++)
    {
        if (n[i] <= 10)
        {
            printf("A[%d] = %.1f\n", i, n[i]);
        }
    }

    return 0;
}