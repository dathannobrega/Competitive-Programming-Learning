#include<stdio.h>
#include<stdlib.h>
int main(){
    int alc=0,gas=0,die=0,num,x=0;
    while (x<1)
    {   
        scanf("%d",&num);
        switch (num)
        {
        case 1:
            alc+=1;
            break;
        case 2:
            gas+=1;
            break;
        case 3:
            die+=1;
            break;
        case 4:
            x=1;
            break;
        default:
            break;
        }
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n",alc);
    printf("Gasolina: %d\n",gas);
    printf("Diesel: %d\n",die);
    return 0;
    system("pause");
}