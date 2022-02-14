#include <stdio.h>

int main()
{
    int N=0, i=0, soma=0, confir=99999; //nao podemos iniciar o confirm com 0 temos que inicia-lo com o maior numero.(tendendo ao infinito)
    scanf("%d", &N);
    int L[N];

    for (i = 0; i < N; i++)
    {
        scanf("%d", &L[i]);
        if (L[i] < confir) // se o numero for o menor ate agr, ele entra no if
        {
            soma = i + 1;  // I +1 pois o vetor começa em zero.
            confir = L[i]; // confir recebe o valor de L[i]
        }
    }

    printf("%d\n", soma);
    return 0;
}