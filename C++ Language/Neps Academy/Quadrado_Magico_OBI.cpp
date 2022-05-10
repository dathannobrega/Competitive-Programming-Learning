#include <iostream>
using namespace std;

int main()
{
    int i, j, N, soma = 0,somconfirm=0,h=0,Diagonal=0,diagonalneg=0;
    cin >> N;
    int M[N][N];
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            cin >> M[i][j];
        }
        soma += M[i][0];
    }

    for (i = 0,j=0; i < N; i++,j++)
    {
        Diagonal+= M[i][h];
    }
    for (i = N-1,j=N-1; i < N; i--,j--)
    {
        diagonalneg+= M[i][h];
    }
    
    for (i = 0; i < N; i += 1)
    {
        for (j = 0; j < N;)
        {
            while (h<N)
            {
                somconfirm+= M[i][h];
                h++;
            }

            if (somconfirm == soma && Diagonal==soma && soma==diagonalneg)
            {
                
            }
            else
            {   cout << "-1\n";
                return 0;
            }
            j+=N;
            somconfirm=0;
            h=0;
        }
    }
    cout << soma << endl;
    return 0;
}
//100 101 102 103 104 104 100 101 102 103 103 104 100 101 102 102 103 104 100 101 101 102 103 104 100;