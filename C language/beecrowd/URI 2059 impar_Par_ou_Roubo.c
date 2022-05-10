#include <stdio.h>

int main()
{
    int p, j1, j2, r, a;
    scanf("%d", &p);
    if (p == 1) // jogador 1 par
    {
        scanf("%d %d %d %d", &j1, &j2, &r, &a);
        if (r == 1 && a == 1) // jogador 1 rouba e jogador 2 acusa
            printf("Jogador 2 ganha!\n");
        else if (r == 0 && a == 1) // jogador 1 nao rouba e jogar 2 acusa
            printf("Jogador 1 ganha!\n");
        else if (r == 1 && a == 0) // JOGADOR 1 rouba o 2 nao acusa
            printf("Jogador 1 ganha!\n");
        else // NINGUEM ACUSA NINGUEM
            if ((j1 + j2) % 2 == 0)
                printf("Jogador 1 ganha!\n");
            else
                printf("Jogador 2 ganha!\n");
    }
    else if (p == 0) // jogador 1 impar
    {
        scanf("%d %d %d %d", &j1, &j2, &r, &a);
        if (r == 1 && a == 1) // jogador 1 rouba e jogador 2 acusa
            printf("Jogador 2 ganha!\n");
        else if (r == 0 && a == 1) // jogador 1 nao rouba e jogar 2 acusa
            printf("Jogador 1 ganha!\n");
        else if (r == 1 && a == 0) // JOGADOR 1 rouba o 2 nao acusa
            printf("Jogador 1 ganha!\n");
        else // NINGUEM ACUSA NINGUEM
            if ((j1 + j2) % 2 == 0)
                printf("Jogador 2 ganha!\n");
            else
                printf("Jogador 1 ganha!\n");
    }

    return 0;
}