#include <iostream>
using namespace std;

class A{
    int x;
public:
    int qual(){
        return this ->x;
    }
    void set_x(int x){//USO DO THIS... assim posso usar o mesmo nome .
        this->x=x;//ou A::x
    }
    A *posicao(){
        x++;
        return this;
    }

};

int main(){
    A a;
    a.set_x(3);
    A *p = a.posicao();
    printf("%d\n",a.qual());
    printf("%d\n",p->qual());

}