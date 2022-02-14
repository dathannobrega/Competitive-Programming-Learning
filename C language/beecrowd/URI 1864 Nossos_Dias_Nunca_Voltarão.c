#include<stdio.h>
#include<string.h>

int main()
{
    char a[35];
    int i,N;
    strcpy(a,"LIFE IS NOT A PROBLEM TO BE SOLVED");
    scanf("%d",&N);
    for (i = 0; i < N; i++)
    {
        printf("%c",a[i]);
    }
    printf("\n");

    return 0;
}