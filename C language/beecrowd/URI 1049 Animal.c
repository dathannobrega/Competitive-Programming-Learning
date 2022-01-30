#include <stdio.h>
#include <string.h>
int main()
{
    char A[20], C[20], B[20];
    scanf("%s %s %s", &A, &B, &C); // USAR UNÇAO STRCMP PARA COMPARAR AS STRINGS
    if (strcmp(A, "vertebrado") == 0)
    {
        if (strcmp(B, "ave") == 0 && strcmp(C, "carnivoro") == 0)
        {
            printf("aguia\n");
        }
        else if (strcmp(B, "ave") == 0 && strcmp(C, "onivoro") == 0)
        {
            printf("pomba\n");
        }
        else if (strcmp(B, "mamifero") == 0 && strcmp(C, "onivoro") == 0)
        {
            printf("homem\n");
        }
        else
        {
            printf("vaca\n");
        }
    }
    else
    {
        if (strcmp(B, "inseto") == 0 && strcmp(C, "hematofago") == 0)
        {
            printf("pulga\n");
        }
        else if (strcmp(B, "inseto") == 0 && strcmp(C, "herbivoro") == 0)
        {
            printf("lagarta\n");
        }
        else if (strcmp(B, "anelideo") == 0 && strcmp(C, "hematofago") == 0)
        {
            printf("sanguessuga\n");
        }
        else
        {
            printf("minhoca\n");
        }
    }
    return 0;
}