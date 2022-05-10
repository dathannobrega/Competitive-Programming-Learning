#include<iostream>
#include <stdlib.h>

using namespace std;

class A
{

public:
    int x;
    A(){x= 7;}
    A(int x){this->x=x;}
    ~A(){printf("Algo\n");}
};

int main (){
    A *p = new A;
    printf("%d\n", p->x); 
    delete(p);
}