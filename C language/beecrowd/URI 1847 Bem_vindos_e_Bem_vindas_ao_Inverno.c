#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if (a > b && c >= b) // primeiro caso feliz
    {
        printf(":)\n");
    }
    else if (a < b && c > b && c-b >=b - a) // segundo caso feliz
    {
        printf(":)\n");
    }
    else if (a > b && c < b && b-c < a-b) // tereceiro caso feliz
    {
        printf(":)\n");
    }
    else if (a == b && c > b) // quarto caso feliz
    {
        printf(":)\n");
    }
    else // Casos tristes
    {
        printf(":(\n");
    }

    return 0;
}
// Se 1º > 2º dia E 2º <= 3º, as pessoas ficam felizes (Primeiro caso feliz.)
// 1<2<3 , mas subiu do 2º para o 3º no mínimo o tanto que subira do 1º para o 2º,
// as pessoas ficam felizes (quarta figura).
// 1>2>3, mas desceu do 2º para o 3º menos do que descera do 1º para o 2º,
// as pessoas ficam felizes (quinta figura).
// 1==2, 3>2 (quarto caso)