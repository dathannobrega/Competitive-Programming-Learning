#include <stdio.h>
 
int main() {
    int n,i,fat=1;
    scanf("%d",&n);
    for (i = n; i!=0; i--)
    {
        fat=fat+(fat*(n-i));
    }
    printf("%d\n",fat);
    return 0;
}