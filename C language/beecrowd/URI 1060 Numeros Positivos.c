#include<stdio.h>
int main()
{
    int i,y=0;
    float x;
    for ( i = 0; i <6; i++)
    {
        scanf("%f",&x);
        if (x>0)
        {
            y++;
        }
    }
    printf("%d valores positivos\n", y);
    return 0;
}
