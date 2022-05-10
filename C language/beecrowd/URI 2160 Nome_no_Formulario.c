#include <stdio.h>
#include <string.h>

int main ()
{
    int b;
    char a[500];
    scanf("%[^\n]s",&a);

    b = strlen(a);

    if (b<=80)
        printf("YES\n");
    else if (b>80)
        printf("NO\n");

    return 0;
}