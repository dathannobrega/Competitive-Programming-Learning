#include <stdio.h>
#include <string.h>

int main()
{
    int i, N;
    scanf("%d", &N);
    char cursos[50];
    for (i = 0; i < N; i++)
    {
        fgets(cursos,50,stdin);
    }
    printf("Ciencia da Computacao\n");
    return 0;
}   