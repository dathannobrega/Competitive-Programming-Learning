#include<stdio.h>
int main ()
{
    int seg,min,h,rest,tempo;
    scanf("%d", &tempo);
    rest = tempo;
    h = tempo/3600;// divide os segunda por horas
    rest= tempo%3600;// transforma o restante em minutos
    min = rest/60;// divide o min por segundos
    rest = tempo%60;//transforma o restante em segundos
    seg= rest;
    printf("%d:%d:%d\n", h,min,seg);
    return 0;
}
