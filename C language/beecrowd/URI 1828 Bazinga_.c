#include <stdio.h>
#include <string.h>

int main()
{
    char shel[10], raj[10];
    int N,i;
    scanf("%d", &N);
    for (i = 1; i <=N; i++)
    {
        scanf("%s %s", shel, raj);
        if (strcmp(shel, raj) == 0)
        {
            printf("Caso #%d: De novo!\n",i); // se for repetido ja encerra essa volta no Loop
            continue;
        }
        if (strcmp(shel, "tesoura") == 0 && strcmp(raj, "papel") == 0) // CASO 1
        {
            printf("Caso #%d: Bazinga!\n",i);
        }
        else if (strcmp(shel, "papel") == 0 && strcmp(raj, "pedra") == 0) // CASO 2
        {
            printf("Caso #%d: Bazinga!\n",i);
        }
        else if (strcmp(shel, "pedra") == 0 && strcmp(raj, "lagarto") == 0) // CASO 3
        {
            printf("Caso #%d: Bazinga!\n",i);
        }
        else if (strcmp(shel, "lagarto") == 0 && strcmp(raj, "Spock") == 0) // CASO 4
        {
            printf("Caso #%d: Bazinga!\n",i);
        }
        else if (strcmp(shel, "Spock") == 0 && strcmp(raj, "tesoura") == 0) // CASO 5
        {
            printf("Caso #%d: Bazinga!\n",i);
        }
        else if (strcmp(shel, "tesoura") == 0 && strcmp(raj, "lagarto") == 0) // CASO 6
        {
            printf("Caso #%d: Bazinga!\n",i);
        }
        else if (strcmp(shel, "lagarto") == 0 && strcmp(raj, "papel") == 0) // CASO 7
        {
            printf("Caso #%d: Bazinga!\n",i);
        }
        else if (strcmp(shel, "papel") == 0 && strcmp(raj, "Spock") == 0) // CASO 8
        {
            printf("Caso #%d: Bazinga!\n",i);
        }
        else if (strcmp(shel, "Spock") == 0 && strcmp(raj, "pedra") == 0) // CASO 9
        {
            printf("Caso #%d: Bazinga!\n",i);
        }
        else if (strcmp(shel, "pedra") == 0 && strcmp(raj, "tesoura") == 0) // CASO 10
        {
            printf("Caso #%d: Bazinga!\n",i);
        }
        else // SE RAJ GANHAR!!!
        {
            printf("Caso #%d: Raj trapaceou!\n",i);
        }
        setbuf(stdin,NULL);
    }
    return 0;
}