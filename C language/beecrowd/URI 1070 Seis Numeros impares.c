#include<stdio.h>
int main()
{
    int i,x;
    scanf("%d",&x);
    for (i = 0; i <6; i++)
    {
        if (x % 2 !=0)
        {
            printf("%d\n",x);
            x=x+2;
        //se o primeiro termo for par, trasforma ele em impar e adiciona 2.
        }else if(x%2==0){
            x++;
            printf("%d\n",x);
            x=x+2;
        }
    }
    return 0;
}