#include<iostream>
#include<stdio.h>
using namespace std;

int main ()
{
    int a,c,N,loops,i,j,fim;
    while (1)
    {
        cin >> N;
        if(N==0)
            break;
        int vet[N][N];
        loops =N/2;
        if (N%2!=0)
            loops++;
        fim=N-1;
        a=0;
        for (c = 1; c <=loops; c++)//cada loop o scan sera mais interno;
        {
            for (i = a; i <=fim; i++)
            {
                for (j = a; j <=fim; j++)
                {
                    vet[i][j]=c;
                }
                
            }
            a++;//nessa parte o proximo numero sera começará +1 coluna e +1 lina
            fim--;//aqui falamos que o proximo loop rodara ate -1 colulna e -1 linha
        }
        
        for (i = 0; i < N; i++)// aqui começa o print;
        {
            for (j = 0; j < N; j++)
            {
                if (j == 0)
					printf("%3d",vet[i][j]);
				else
					printf(" %3d",vet[i][j]);
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}