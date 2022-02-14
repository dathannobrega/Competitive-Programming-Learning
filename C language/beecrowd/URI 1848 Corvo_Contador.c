#include<stdio.h>
#include<string.h>

int main(){
    char Olhos[8];
    int i,soma=0,j;
    for (i = 0; i < 3;)
    {
        fgets(Olhos,8,stdin);//deve usar o fgets pois scanf so reconhece ate o espaço.
        if (Olhos[2]=='*')
        {
            soma+= 1;
        }
        if (Olhos[1]=='*')
        {
            soma += 2;
        }
        if (Olhos[0]=='*')
        {
            soma += 4;
        }
        if (strcmp(Olhos,"caw caw")==0)
        {
            printf("%d\n",soma);
            soma = 0;
            i++;
        }
        setbuf(stdin,NULL);
    }
    return 0;
}