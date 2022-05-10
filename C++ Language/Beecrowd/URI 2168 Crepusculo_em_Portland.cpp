#include <iostream>

using namespace std;

int main()
{
    int N,i,j;
    cin >> N;
    int a[N+1][N+1];
    char b[N][N];

    for (i = 0; i <=N; i++)
    {
        for (j = 0; j <= N; j++)
        {
            cin >> a[i][j];
        }    
    }

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            if((a[i][j] + a[i][j+1] + a[i+1][j]+ a[i+1][j+1]) >=2 )
                b[i][j] = 'S';
            else
                b[i][j] = 'U';
        }
        
    }
    
    for (i = 0; i <N; i++)
    {
        for (j = 0; j < N; j++)
        {   
            if (j==N-1)
                cout << b[i][j]<< endl;
            else
                cout << b[i][j];
        }    
    }


    return 0;
}