#include<stdio.h>
int main()
{
    int i,x=0,value;
    for (i = 0; i < 5; i++)
    {
        scanf("%d",&value);
        if (value%2 ==0)
        {
            x++;
        }
        
    }
    printf("%d valores pares\n",x);
    return 0;
}