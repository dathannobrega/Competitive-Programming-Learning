#include <iostream>

using namespace std;

struct A {
    int x;
    static int y;
    static void F(){//metodos estaticos n pode usar atributos nao estaticos.
        cout << "VALOR : " << y << endl;
    }
};

    int A::y = 0; //Sempre que usar um static é necessario inicia-la globalmente.

int main (){
    A ob1,ob2;
    ob1.x=2;
    ob2.x=3;
    ob1.y=5;
    cout << ob1.y << " " << ob2.y << endl;
    cout << ob1.x << " " << ob2.x << endl;
    ob1.F();
} 