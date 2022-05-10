#include <bits/stdc++.h>

using namespace std;



int main()
{
    int i, N, compradas, M[301], a, contador = 0,tamanho=0,j;
    cin >> N >> compradas;
    i = 0;
    while (scanf("%d", &a) != EOF)
    {
        M[i] = a;
        i++;
    }

    int B[301];''

    for (i = 0; i < compradas; i++)
    {
        bool verifica = true;

        for (j = 0; j <= contador; j++)
        {
            if(M[i]==B[j]){
                verifica=false;
                break;
            }
        }
        if(verifica==true){
            B[contador]=M[i]; //b[5]{1,2,3,4,5}
            contador++;
        }
    }

    cout << N-contador;
    return 0;
}