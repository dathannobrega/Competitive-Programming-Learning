#include<stdio.h>
int main()
{
    int a,b,c,x,z;
    scanf("%d %d %d", &a, &b, &c);
    x = ((a+b+abs(a-b))/2);
    z = ((x+c+abs(x-c))/2);
    printf("%d eh o maior\n", z);
    return 0;
}
