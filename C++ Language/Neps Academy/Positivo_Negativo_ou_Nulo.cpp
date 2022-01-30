#include<iostream>
using namespace std;
int main (){
    int a;
    cin>> a;
    if (a>0)
    {
        cout << "positivo\n";
    }else if (a<0)
    {
        cout << "negativo\n";
    }else
    {
        cout << "nulo\n";
    }
    
    return 0;
}