#include <iostream>
using namespace std;

int main ()
{
    int a,b,c,aux;
    cin >> a >> b >> c;
    if (a> b && b < c){
        aux=b;
        b=c;
        c=aux;
    }
    if (a< b && b < c){
        aux=a;
        a=c;
        c=aux;
    }
    if (a< b && b > c){
        aux=a;
        a=b;
        b=aux;
    }
    if(a==b && c>a){
        aux=a;
        a=c;
        c=aux;
    }
    if(c>b){
        aux=b;
        b=c;
        c=aux;
    }
    
    if (b==a || c==a || b==c)
        cout << "S" << endl;
    else if(c+b==a || b-c ==a || a+c==b)
        cout << "S" << endl;
    else if(a-(b+c)==1 && b==c)
        cout << "S" << endl;
    else
        cout << "N" << endl;
    
    return 0;
}   