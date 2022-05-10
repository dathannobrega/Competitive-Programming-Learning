#include <stdio.h>
#include <string.h>

int main()
{
    int b, numer;
    char num[100];

    scanf("%s", num);
    numer = strlen(num);

    for (b = numer - 1; b >= 0; b--)
    {
        if (b == 0)
            printf("%c\n", num[b]);
        else
            printf("%c", num[b]);
    }
    return 0;
}