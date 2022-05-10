#include <iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    int N, i, j, a = 0, b = 0;
    cin >> N;
    int vetor[N];

    for (i = 0; i < N; i++) // preenchendo o vetor
    {
        cin >> vetor[i];
    }

    for (i = 0; i < N; i++) // calcula a menor distancia para o zero.
    {
        j = i;
        while (!(vetor[j] == 0))// calcula a distancia ate 0 decrescendo
        {
            b++;
            j--;
            if(j<0)
            b=999;//se estourar o vetor(no caso ser o primeiro vetor) retorna 9
        }
        j = i;
        while (!(vetor[j] == 0))// calcula a distancia ate 0 acrecentando
        { 
            a++;
            j++;
            if(j>N)
            a=999;//se estourar N (no caso ser o ultimo Vetor ) ira valer 999
        }
        vetor[i]= min(min(abs(a),abs(b)),9); // pega o menor valor entre a e b, retornando 9 se for maior que 9;

        b = 0;// zera a
        a = 0;
    }

    for (i = 0; i < N; i++)
    {
        if (i == N)
        {
            cout << vetor[i] << "\n";
        }
        cout << vetor[i] << " ";
    }
}