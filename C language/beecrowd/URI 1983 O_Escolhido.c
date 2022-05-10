#include <stdio.h>

float maiore(float *nota,int count){
    int maior,i;
    float notinha=0;
    for (i = 0; i < count; i++)
    {
        if (notinha<nota[i])
        {
            notinha=nota[i];
            maior = i;
        }
    }
    return maior;
}



int main (){
    int i,count,mai;
    scanf("%d",&count);
    int id[count];
    float nota[count];
    for (i = 0; i < count; i++)
    {  
        scanf("%d %f",&id[i],&nota[i]);
    }
    mai = maiore (nota,count);
    if (nota[mai]<8)
        printf("Minimum note not reached\n");
    else
        printf("%d\n",id[mai]);
    return 0;
}