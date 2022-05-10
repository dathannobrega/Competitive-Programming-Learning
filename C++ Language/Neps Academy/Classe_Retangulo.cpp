#include <stdio.h>

//TODO: Implemente a classe Retangulo
class Retangulo{
    int x1,y1,x2,y2;
public:
    void set_pontos(int X1,int Y1,int X2,int Y2){
        x1=X1;x2=X2;y1=Y1;y2=Y2;
    }
    int area (){
        int aux;
        if(x1<x2){
            aux=x2;
            x2=x1;
            x1=aux;
        }
        if(y1<y2){
            aux=y2;
            y2=y1;
            y1=aux;
        }
        aux=(x1-x2)*(y1-y2);
        return aux;
    }
};

int main(){

    Retangulo retangulo;
    int N;

    scanf("%d", &N);

    for(int i=0;i<N;i++){
        int x1, y1, x2, y2;
        char operacao;

        scanf(" %c", &operacao);

        if(operacao == 'R'){ //Redimensionar
            scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
            retangulo.set_pontos(x1, y1, x2, y2);
        }else if(operacao == 'A'){ //Imprimir a área
            printf("%d\n", retangulo.area());
        }
    }
    return 0;
}
