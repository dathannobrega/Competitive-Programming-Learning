#include<stdio.h>
int main()
{
    float i,j,h=1;
    for ( i = 0; i < 2.1; i+=0.2)
    {
        for (j = h; j <=h+2.9; j++)
        {
            if (i==0||i==1||i>2)
            {   
                printf("I=%.0f J=%.0f\n",i,j);
            }else
            {
                printf("I=%.1f J=%.1f\n",i,j);
            }
        }
        h+=0.2;
    }
    return 0;
}
