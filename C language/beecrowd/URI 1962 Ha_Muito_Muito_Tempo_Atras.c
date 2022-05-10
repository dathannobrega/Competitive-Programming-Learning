#include <stdio.h>

int main (){
    int N,a,i;
    scanf("%d",&N);
    for (i = 0; i < N; i++)
    {
        scanf("%d",&a);
        if (2015-a <0)
        {
            printf("%u A.C.\n",a-2015+1);
        }else if (2015-a==0)
        {
            printf("1 A.C.\n");
        }
        else
        {
            printf("%u D.C.\n",2015-a);
        }

        
    }
    



    return 0;
}