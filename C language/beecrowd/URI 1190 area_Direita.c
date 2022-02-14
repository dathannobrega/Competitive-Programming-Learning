#include <stdio.h>
 
int main() {
    double M[12][12],soma=0;
    char op;
    int i,j;
    scanf("%c",&op);
    for (i = 0; i < 12; i++)
    {
        for (j = 0; j < 12; j++)
        {
            scanf("%lf",&M[i][j]);
            if (j>11-i && i<6)//priemria metade da area
            {
                soma += M[i][j];
            }if (j>i && i>5)// Segunda metado da area
            {
                soma += M[i][j];
            }   
        }   
    }
    if (op =='M')
    {
        printf("%.1lf\n",soma/30);
    }else
    {
        printf("%.1lf\n",soma);
    }
    return 0;
}