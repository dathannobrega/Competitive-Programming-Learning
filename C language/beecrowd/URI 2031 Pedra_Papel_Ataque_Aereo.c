#include <stdio.h>
#include <string.h>

int main()
{
    int N, i;
    char j1[20], j2[20];
    scanf("%d", &N);
    for (i = 0; i < N; i++)
    {
        scanf("%s %s", j1, j2);
        // CASOS EM QUE O PLAYER 1 GANHA
        if (strcmp(j1, "ataque") == 0 && strcmp(j2, "pedra") == 0)
            printf("Jogador 1 venceu\n");
        if (strcmp(j1, "ataque") == 0 && strcmp(j2, "papel") == 0)
            printf("Jogador 1 venceu\n");
        if (strcmp(j1, "pedra") == 0 && strcmp(j2, "papel") == 0)
            printf("Jogador 1 venceu\n");
        if (strcmp(j1, "papel") == 0 && strcmp(j2, "ataque") == 0)
            printf("Jogador 2 venceu\n");
        // CASOS ONDE 2 perdem ou dois GANHAM
        if (strcmp(j1, "papel") == 0 && strcmp(j2, "papel") == 0)
            printf("Ambos venceram\n");
        if (strcmp(j1, "pedra") == 0 && strcmp(j2, "pedra") == 0)
            printf("Sem ganhador\n");
        if (strcmp(j1, "ataque") == 0 && strcmp(j2, "ataque") == 0)
            printf("Aniquilacao mutua\n");
        // CASOS EM QUE PLAYER 2 GANHA
        if (strcmp(j1, "pedra") == 0 && strcmp(j2, "ataque") == 0)
            printf("Jogador 2 venceu\n");
        if (strcmp(j1, "papel") == 0 && strcmp(j2, "pedra") == 0)
            printf("Jogador 2 venceu\n");
    }
    return 0;
}