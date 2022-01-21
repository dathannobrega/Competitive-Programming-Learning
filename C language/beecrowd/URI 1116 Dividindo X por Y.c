#include<stdio.h>
int main()
{
    int n,i;
    scanf ("%d",&n);
    for (i = 0; i < n; i++)
    {
        int x,y;
        scanf("%d %d",&x,&y);
        if ((x<y || x==y)&& y!=0)
        {
            printf("%.1f\n",(float)x/y);
        }else if (y==0)
        {
            printf("divisao impossivel\n");
        }else if (x>y)
        {
            printf("%.1f\n",(float)x/y);
        }  
    }
    return 0;
}