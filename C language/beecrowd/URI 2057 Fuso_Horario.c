#include <stdio.h>

int main ()
{
    int saida,viagem,fus,hr;
    scanf("%d %d %d",&saida,&viagem,&fus);
    hr = saida + viagem + fus;
    if (hr ==24)
        printf("0\n");
    else if(hr>24) 
        printf("%d\n",hr-24);
    else if(hr <0)
        printf("%d\n",hr+24);
    else
        printf("%d\n",hr);



    return 0;
}