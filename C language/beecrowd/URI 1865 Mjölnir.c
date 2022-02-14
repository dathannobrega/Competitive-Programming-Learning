#include <stdio.h>
#include <string.h>

int main()
{
    int i, N, new;
    char nome[50];
    scanf("%d", &N);
    for (i = 0; i < N; i++)
    {
        scanf("%s %d", nome, &new);
        if (strcmp(nome, "Thor") == 0)
        {
            printf("Y\n");
        }
        else
        {
            printf("N\n");
        }
    }
    return 0;
}