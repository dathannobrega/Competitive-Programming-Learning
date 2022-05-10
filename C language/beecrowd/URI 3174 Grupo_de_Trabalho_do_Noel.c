#include <stdio.h>
#include <string.h>

int main()
{
    int n, i, bo = 0, ar = 0, mu = 0, des = 0, soma;
    scanf("%d", &n);
    char a[24], prof[24];
    int hr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%s %s %d", a, prof, &hr[i]);

        if (strcmp(prof, "bonecos") == 0)
            bo += hr[i];
        else if (strcmp(prof, "arquitetos") == 0)
            ar += hr[i];
        else if (strcmp(prof, "musicos") == 0)
            mu += hr[i];
        else
            des += hr[i];
    }
    soma = (bo / 8) + (ar / 4) + (mu / 6) + (des / 12);
    printf("%d\n", soma);
    return 0;
}