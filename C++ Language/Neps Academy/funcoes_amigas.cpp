#include<iostream>

using namespace std;

class A{
    int x;
    friend int ver(A);
    friend void editar(A*,int X);
};

int ver(A objeto){
    return objeto.x;
}
void editar(A *objeto , int X){
    objeto->x=X;
}

int main (){
    A objeto;
    cout << ver(objeto) << endl;
    editar(&objeto, 7);
    cout << ver(objeto) << endl;

}