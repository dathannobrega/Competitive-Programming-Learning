#include<iostream>

using namespace std;

int main (){
    char a[10];
    int pos,pos3;
    while(1){

    cin >> a;
    //////NUMEROS com 2 CHAR///////////
    //pos=(((a[0]-64)*26)+(a[1]-64));/
    /////////////////////////////////

    /////NUMEROS com 3 CHAR///////
    pos3=(676*(a[0]-64))+((a[1]-64)*26)+(a[2]-64);
    cout << "posiçao com 3 letras: " << pos3 << endl;

    }
    return 0;
}