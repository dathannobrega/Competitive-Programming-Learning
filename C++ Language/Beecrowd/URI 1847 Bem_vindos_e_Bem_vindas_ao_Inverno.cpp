#include <iostream>
using namespace std;

int main (){
    int a,b,c;
    cin >> a >> b >> c;
    if (a>b && b<=c )//primeiro caso feliz
    {
        cout << ":)\n";
    }else if (a<b && b<c && c-b>= b-a )//segundo caso feliz
    {
        cout << ":)\n";
    }else if (a>b && b>c && b-c<a-b)//terceiro caso feliz
    {
        cout << ":)\n";
    }else if (a==b && b<c)//quarto caso feliz
    {
        cout << ":)\n";
    }else{ //Todos os casos tristes
        cout << ":(\n";
    }
    return 0;

}