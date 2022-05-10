#include<iostream>

using namespace std;

class A{

    int x;
    friend class B;
};
class B
{
private:
    int x;
public:
    int qual(A);
};


int B::qual(A obj){
    return obj.x;
}

int main (){

}