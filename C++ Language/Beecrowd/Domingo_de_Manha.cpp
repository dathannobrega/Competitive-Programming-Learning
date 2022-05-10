#include <stdio.h>
using namespace std;

int main ()
{
    int hr,min, atraso;
    while (scanf("%d:%d",&hr,&min)!=EOF)
    {
        atraso = 60+min+(60*hr)-480;
        if (atraso<0)
            printf("Atraso maximo: 0\n");
        else if (atraso >0)
            printf("Atraso maximo: %d\n",atraso);
        else 
            printf("Atraso maximo: 0\n");
    }
    
    return 0;
}