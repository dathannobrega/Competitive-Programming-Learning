#include<stdio.h>
int main(){
    int A,B,C;
    scanf("%d%d%d",&A,&B,&C);
    if (B<A && A>C)
    {//se A FOR MAIOR
        if(B>C){printf("%d\n%d\n%d\n",C,B,A);}
        if(C>B){printf("%d\n%d\n%d\n",B,C,A);}      
    }else if(A<B && B>C)
    {//SE B FOR MAIOR
        if(A>C){printf("%d\n%d\n%d\n",C,A,B);}
        if(C>A){printf("%d\n%d\n%d\n",A,C,B);}   
    } else if(A<C && C>B)
    {//SE C FOR MAIOR
        if(A>B){printf("%d\n%d\n%d\n",B,A,C);}
        if(B>A){printf("%d\n%d\n%d\n",A,B,C);}   
    }
    printf("\n");
    printf("%d\n%d\n%d\n",A,B,C);
    return 0;
}