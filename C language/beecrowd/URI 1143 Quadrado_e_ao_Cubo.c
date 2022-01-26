#include<stdio.h>
#include<stdlib.h>
int main (){
    int x,y,z=1,i;
    scanf("%d",&x);
    for (i = 0; i < x; i++)
    {
        for (y = z; y <=(z*z*z); y++)
        {
            if (z==1)
            {
                printf("%d ",y);
                printf("%d ",y);
                printf("%d\n",y);
                break;
            }
            if (y==z)
            {          
                printf("%d ",y);
            } else if (y==z*z)
            {
                printf("%d ",y);
            } else if (y==(z*z*z))
            {
                printf("%d\n",y);
            }
        }
        z++;
    }
    return 0;
}