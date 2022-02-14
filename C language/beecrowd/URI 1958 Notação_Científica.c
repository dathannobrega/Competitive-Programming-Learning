#include <stdio.h>
#include <math.h>

int main()
{
    double a;
    scanf("%lf", &a);

    printf("%+.4E\n", a); // colocar o+ antes do ponto para aparecer os sinais

    return 0;
}