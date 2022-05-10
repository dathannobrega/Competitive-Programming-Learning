#include<iostream>
#include<string.h>

using namespace std;

int main (){
    string pa;
    cin >> pa;
    bool a = true;
    if(pa.length()>=10){
        a=false;
    }
    cout << (a? "palavrinha\n":"palavrao\n");
    return 0;
}