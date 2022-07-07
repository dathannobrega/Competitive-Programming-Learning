#include <bits/stdc++.h>
using namespace std;

struct madrugador
{
    string nome;
    int tempo;
};

typedef struct madrugador Madrugador;

int main(){
    int a,b;
    // faz o primeiro scan para entrar no while
    cin >> a;

    while (a!=0) {
        Madrugador M[a];
        int in,out,test=24,pos=0;
        for (int i = 0; i < a; i++)
        {
            //aqui ja leio o nome, tempo que chegou e a hr que saiu.
            cin >> M[i].nome;
            cin >> in >> out;
            M[i].tempo=in-out;
            //esse if serve para guardar a posiçao do que saiu mais cedo.
            if(M[i].tempo<test){
                test=M[i].tempo;
                pos=i;
            }
        }
        cout << M[pos].nome << endl;
        cin >> a;
    }
    
    return 0;
}