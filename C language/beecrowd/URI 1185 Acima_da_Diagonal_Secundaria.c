#include <stdio.h>
 
int main() {
 
    float M[12][12],soma=0;
    char op;
    int i,j;
    scanf("%c",&op);
    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
            scanf("%f",&M[i][j]);
            if(j<11-i){
                soma+=M[i][j];
            }
        }
    }
    if(op=='M'){
        printf("%.1f\n",soma/66);
    }else{
        printf("%.1f\n",soma);
    }
    return 0;
}