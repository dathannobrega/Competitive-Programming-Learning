#include<stdio.h>
int main (){
    float i,media=0,nota,stop=0;
    for (i = 0;EOF; i++)//for que sempre ira rodar.
    {
        if (stop==2)//valor de stop chegando a 2, quebra o loop.
            {
                break;
            }
        scanf("%f",&nota);
        if (nota>=0 && nota<=10)
        {
            stop +=1;
            media += nota;//toda vez q hover um numero positivo, será add a varial
            continue;//serve para resetar o loop
        }
        printf("nota invalida\n");
        
    }
    printf("media = %.2f\n",media/2);
    return 0;
}                ////////OU
/*#include<stdio.h>
int main (){
    float i,media=0,nota,stop=0;
   while (1) 
    {
        if (stop==2)
        {
            break;
        }
        
        scanf("%f",&nota);
        if (nota>=0 && nota<=10)
        {
            stop +=1;
            media += nota;
        }else
        {
            printf("nota invalida\n");
        } 
    }
    printf("media = %.2f\n",media/2);
    return 0;
}
*/