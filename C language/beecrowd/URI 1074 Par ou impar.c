#include<stdio.h>
int main ()
{
    int x,value,i;
    scanf("%d",&x);
    for (i = 0; i < x; i++)
    {
        scanf("%d",&value);
        if (value==0)
        {
            printf("NULL\n");
        }else if(value>0){
            if (value%2==0){
                printf("EVEN POSITIVE\n");
            }else{
                printf("ODD POSITIVE\n");
            }   
        }else if (value<0){
            if (value%2==0)
            {
                printf("EVEN NEGATIVE\n");
            }else
            {
                printf("ODD NEGATIVE\n");
            }      
        }
    }
    return 0;
}