#include<stdio.h>

int main (){
    int hr,min,atraso;
    while (scanf("%d:%d",&hr,&min)!=EOF)
    {
        min= min + 60*hr +60;
        atraso = min-480;
        if (atraso<=0)
            printf("Atraso maximo: 0\n");
        else if (atraso>0)
            printf("Atraso maximo: %d\n",atraso);
    }
    

    return 0;
}