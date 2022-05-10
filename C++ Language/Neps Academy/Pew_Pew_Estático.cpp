#include <stdio.h>

struct Inimigo {    
    int id;
    int x; 
    int y;
    bool vivo;
    static int quantidade_vivos;

    //É necessário ter um construtor sem parâmetros para criar o vetor na função principal
    Inimigo(){
        id = -1;
        x = -1; 
        y = -1;
        vivo = false;
    }

    //TODO: Crie um construtor que inicializa um inimigo usando os parâmetros abaixo.
    Inimigo(int ID, int X, int Y, int VIVO){        
        id = ID;
        x = X; 
        y = Y;
        vivo = VIVO;
    }

    //TODO: Método que muda a o status do inimigo de vivo para morto caso seja acertado pelo lazer na posição (X,Y). Também deve atualizar a variável quantidade_vivos.
    void foi_acertado(int X, int Y){
        if(x==X && y==Y && vivo){
        vivo=false;
        quantidade_vivos --;
        }        
    }

};

int Inimigo::quantidade_vivos = 0;

int main(){

    int N; //Quantidade de Inimigos
    scanf("%d", &N); 

    Inimigo inimigo[N];
    Inimigo::quantidade_vivos = N;

    for(int id=0;id<N;id++){
        int x, y;
        scanf("%d %d", &x, &y);

        inimigo[id] = Inimigo(id, x, y, true);
    }

    int M; //Quantidade de Inimigos
    scanf("%d", &M);     

    for(int i=0;i<M;i++){
        int x, y;
        scanf("%d %d", &x, &y);

        for(int id=0;id<N;id++){
            inimigo[id].foi_acertado(x,y);
        }
    }

    //TODO: Imprima a saída conforme indicada no enunciado do exercício.
    printf("vivos: %d\n", Inimigo::quantidade_vivos);
    printf("mortos: %d",N-Inimigo::quantidade_vivos);
}
