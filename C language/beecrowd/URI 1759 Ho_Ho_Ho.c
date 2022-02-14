#include <stdio.h>
int main (){
    int i,n;
    scanf("%d",&n);
    for (i = 1; i <=n; i++)
    {
        if (i==n)
        {
            printf("Ho!\n");
            break;
        }
        
        printf("Ho ");
    }
    return 0;
}