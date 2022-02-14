#include <stdio.h>

int main(){
    int lesmas,j,n,valor,level;
    while(scanf("%d",&lesmas) != EOF)//o looping vai occorer ate lesmas nao receber valor
    {
        for (j = 0; j < lesmas; j++)// cada lesma ira recebr seu valor
        {
            scanf("%d",&valor);
            if (valor>=20)//
            {
                level=3;
            }else if (valor >=10 && valor <20 && level!=3)//se level for 3 ele começa a ignorar ou outrso valores
            {
                level=2;
            }else if(valor<10 && level !=2 && level !=3)//se lvl for 1
            {
                level=1;
            }
        }
        printf("%d\n",level);
        level =0;
    }
    return 0;
}