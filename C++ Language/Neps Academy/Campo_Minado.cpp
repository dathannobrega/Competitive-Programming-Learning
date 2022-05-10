#include <iostream>
using namespace std;

int main()
{
    int N, i;
    cin >> N;
    int bombas[N], novo[N];

    for (i = 0; i < N; i++)
    {
        cin >> bombas[i];    // Preenche o vetor
        novo[i] = bombas[i]; // copia o vetor para "novos"
    }

    for (i = 0; i < N; i++) // If para fazer as substituiçoes
    {
        if (i == 0) // se for o primeiro termo
        {
            if (bombas[i] == 1) // se o valor for o primeiro termo
            {
                novo[i] = 1;
            }
            if (bombas[i+1] == 1) // se seu antecessor for uma bomba, adiciona uma bomba pro local
            {
                novo[i]++;
            }
        }
        else
        {
            if (bombas[i] == 1) // se o valor for 1 a casa vira 1
            {
                novo[i] = 1;
            }
            if (bombas[i - 1] == 1) // se seu antecessor for uma bomba, adiciona uma bomba pro local
            {
                novo[i]++;
            }
            if (bombas[i + 1] == 1) // se o sucessor for uma bomba , adiciona mais uma bomba
            {
                novo[i]++;
            }
        }
    }

    for (i = 0; i < N; i++) // for para printar o novo vetor
    {
        cout << novo[i] << endl;
    }

    return 0;
}