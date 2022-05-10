#include <iostream>
#include <string.h>
using namespace std;

int main (){
    int abas,acoes,i;
    char p[7];
    cin>> abas >> acoes;
    for (i = 0; i < acoes; i++)
    {
        cin >> p;
        if (strcmp(p,"fechou")==0)
            abas++;
        else if (strcmp(p,"clicou")==0)
            abas--;
    }
    
    cout << abas << endl;
    return 0;
}