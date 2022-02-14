#include<stdio.h>
#include<stdlib.h>
int main (){
    short int a=0,b=0,q=0,r=0;
    scanf("%hd %hd",&a,&b);
    // a= b*q+r  <-FORMULA EUCLIDIANA
    //r = a-(b*q)
    q= a/b;
    if (a<0 && b<0)
    {
        q++;
        r= (a-(b*q));
    }else if (a<0 && b>0)
    {
        q--;
        r = (a-(b*q));
    }else if (a>0 && b>0 )
    {
        r = (a-(b*q));
    }else
    {
        
        r= a -(b*q); 
    }
    
    printf("%d %d\n",(int)q,(int)r);
    return 0;
}