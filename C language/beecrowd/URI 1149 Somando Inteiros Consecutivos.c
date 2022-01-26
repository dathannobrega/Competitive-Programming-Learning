#include <stdio.h>
int main()
{ //N é o numero de vezes que vai ser rodado o For
    int A, N, soma = 0, i;
    scanf("%d %d", &A, &N);
    while (1)
    {
        i=A;
        if (N > 0)
        {
            while((A-i)<N)
            {
                soma += A;
                A++;
            }
            
            printf("%d\n", soma);
            break;
        }
        else if (N <= 0)
        {
            scanf("%d",&N);
        }
    }
    return 0;
}