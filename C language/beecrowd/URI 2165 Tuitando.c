#include <stdio.h>
#include <string.h>

int main ()
{
    int a;
    char b[500];

    scanf("%[^\n]s",&b);
    a = strlen(b);

    if (a<=140)
    {
        printf("TWEET\n");
    }else
    {
        printf("MUTE\n");
    }
    
    

    return 0;
}