#include <stdio.h>

int main ()
{
    int N,a,b,i,j,M;
    while (scanf("%d",&N) != EOF)
    {
        int M[N][N];
        for (i = 0; i < N; i++)
        {
            for (j = 0; j < N; j++)
            {
                M[i][j]=3;
                if (j==i)
                    M[i][j]=1;
                if (j==(N-1)-i)
                    M[i][j]=2;
                if(j==N-1)
                   printf("%d\n",M[i][j]); 
                else
                    printf("%d",M[i][j]);
            }
        }
    }
    return 0;
}