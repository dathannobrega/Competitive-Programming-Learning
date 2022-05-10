#include <iostream>
#include<string.h>
///!!!NAO ACHEI A FORMUlA PARA VEr O NUMERO DA COLUNA!!!//////////
using namespace std;

int main(){
    char a[10];
    int soma=0,aux;
    while(scanf("%s",a)!=EOF)
    {
        int tam=strlen(a);
        if(tam==1){
            aux=a[0]-64;
            cout << aux << endl;
        }else if(tam==2){
            aux=a[1]-64;
            soma=(a[0]-64)*26+(aux);
            cout << soma<< endl;

        }else if(tam==3){
            aux=(676*(a[0]-64))+((a[1]-64)*26)+(a[2]-64);
            if(aux>16384){
                cout<<"Essa coluna nao existe Tobias!\n";
            }else{
                cout << aux<< endl;
            }
        }else{
            cout<<"Essa coluna nao existe Tobias!\n";
        }
    }

    return 0;
}