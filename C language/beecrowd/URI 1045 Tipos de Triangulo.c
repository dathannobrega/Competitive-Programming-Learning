#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,aux;
    scanf("%f%f%f",&a,&b,&c);
    //
    if (a<b)
    {
        aux=a;
        a=b;
        b=aux;
    }if(a<c)
    {
        aux=a;
        a=c;
        c=aux;
    }
    //TESTANDO ANGULOS
    if(a >= b+c)
    {
        printf("NAO FORMA TRIANGULO\n");
        return 0;
    }
    if(pow(a,2)== pow(b,2)+pow(c,2))
    {
        printf("TRIANGULO RETANGULO\n");
    }else if(pow(a,2) > pow(b,2) + pow(c,2))
    {
        printf("TRIANGULO OBTUSANGULO\n");
    }else if(pow(a,2) < pow(b,2) + pow(c,2))
    {
        printf("TRIANGULO ACUTANGULO\n");
    }        

    //TESTANDO RETAS
    if(a==b && b==c)
    {
        printf("TRIANGULO EQUILATERO\n");
    }else if (a==b || b==c || a==c)
    {
        printf("TRIANGULO ISOSCELES\n");
    }
    return 0;
}
