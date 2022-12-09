#include<stdlib.h>
#include<stdio.h>
#include<string.h>

#define MAX 999

typedef struct pilha{
    int top;
    char dados[MAX];
}Pilha;

int cheia(Pilha *P){
    if(P->top==MAX-1)
        return 1;//true
    else
        return 0;//false
}

int vazia(Pilha *P){
    if(P->top==-1)
        return 1;
    else    
        return 0;
}

Pilha* criar(void){
    Pilha *p;
    p = (Pilha*)malloc(sizeof(Pilha));

    p->top=-1;
    return p;
}

void push(Pilha *P,char x){
    if(cheia(P)==1){}
    else{
        P->top+=1;
        P->dados[P->top]=x;
    }
}

void pop(Pilha *P,char *x){
    if(vazia(P)==1){
    }
    else{
        P->top = P->top- 1;
        *x= P->dados[P->top+1];
    }      
}

///AKI ACABA A CRIAÇAO DA TAD PILHA

int main(void){
    Pilha *P;
    P=criar();
    int a;
    scanf("%d",&a);
    for (int i = 0; i < a; i++)
    {
        P=criar();
        char a[100000];
        setbuf(stdin,NULL);
        scanf("%s",a);
        for (int j = 0; j < strlen(a); j++)
        {

            char let='C';
            if(a[j]=='{' || a[j]=='['|| a[j]=='('){
                push(P,a[j]);
                continue;
            }

            if(a[j]=='}'){
                pop(P,&let);
                if(let !='{'){
                    push(P,'E');
                    break;
                }
            }
            else if(a[j]==')'){

                pop(P,&let);

                if(let!='('){
                    push(P,'E');
                    break;
                }
            }
            else if(a[j]==']'){

                pop(P,&let);
                if(let!='['){
                    push(P,'E');
                    break;
                }
            }
        }

        if(vazia(P)==1){
            printf("S\n");
        }else
            printf("N\n");
        free(P);
    }
    
  
}