#include <stdio.h>

int main()
{
    int a, b, quociente, resto;
    scanf("%d%d", &a, &b); // le um Numero A e B

    quociente = a / b;
    resto = a % b;
    //a = (b × q) + r <<< Teorema da Divisão Euclidiana
    //r = a - (b x q) <<< resto do Teorema da Divisão Euclidiana
    //q = (r - a) / b <<< quociente do TeOREMA da Divisao Euclidiana

    if (quociente==0 && b<0 && a<0)//EX: a=-2 b=-5
    {
        quociente++;//q=0 | q=1
        resto = a - (b * quociente);
        printf("%d %d\n", quociente, resto);
        return 0;
    }
    if (quociente==0 && b>0 && a<0)//EX: a=-1 b=75
    {
        quociente--; //q=0 | q=-1
        resto = a - (b * quociente);
        printf("%d %d\n", quociente, resto);
        return 0;
    }
    
    if (resto < 0)// Se o resto for menor q Zero
    {
        if (quociente < 0)// se o Quociente for negativo ele diminui 1
        {
            quociente--; //CASO A : se a=-7 b= 3 |q= a/b= -2 | q= -3
        }
        if (quociente > 0) //CASO B :se co cociente for positivo ele aumenta 1
        {
            quociente++;//CASO B : se a=-7 b=-3 |q= a/b= 2 | q= 3
        }
    }
        resto = a - (b * quociente);//CASO B : resto= -7 - (-3*3) = -7+9 = 2|| CASO A: resto= -7 - (3*-3)
    printf("%d %d\n", quociente, resto);
    return 0 ;
}