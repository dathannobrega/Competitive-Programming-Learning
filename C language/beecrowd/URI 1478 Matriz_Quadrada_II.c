#include <stdio.h>

int main ()
{
    int N,i,j,start1,start2;
    while (1)
    {
        scanf("%d",&N);
        if (N==0)
            break;
        
        int vet[N][N];
        for (i = 0; i < N; i++)
        {
            start1=i+1;
            start2=2;
            for (j = 0; j <=i; j++,start1--)
            {
                vet[i][j]=start1;
            }
            
            for (j = i+1; j <N; j++,start2++)
            {
                vet[i][j]=start2;
            }
        }
        
        for (i = 0; i < N; i++)
        {
            for (j = 0; j < N; j++)
            {
                if(j==0)
                    printf("%3d",vet[i][j]);
                else    
                    printf(" %3d",vet[i][j]);
            }
            printf("\n");
        }
        printf("\n");


    }
    return 0;
}