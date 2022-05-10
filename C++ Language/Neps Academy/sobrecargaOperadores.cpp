#include <iostream>

using namespace std;

class A{
    public:
    int x,y;
    A(){x=y=0;}
    A(int x,int y){
        this ->x=x;
        this ->y=y;
    }
    A operator +(A a){
        return A(x+a.x, y+a.y);
    }
};
//OU PODERIA CRAIR UMA FUNÇAO PARA ISSO
A soma (A a, A b){
    return A(a.x+b.x , a.y+b.y);
}
//DUAS MANEIRAS DE FAZER A SOMA
int main (){
    A a,b,c;
    a= A(1,4);
    b= A(3,7);
    c= a+b;
    cout << c.x <<" "<< c.y << endl;
}