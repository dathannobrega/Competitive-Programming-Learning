#include <iostream>

using namespace std;

struct A{
    int x;
    A(){
        x=0;
    }
    A(int valor){
        x=valor;
    }

};

int main(){
    struct A objeto;
    cout << objeto.x << endl;
    objeto.x = 1;
    cout << objeto.x << endl;
    objeto = A(5);
    cout << objeto.x << endl;

}