#include<iostream>
#include<cstring>
using namespace std;

int main (){
    int i,soma=0;
    char olhos[8];

    for (i = 0; i <3;)
    {
        cin.getline (olhos,8);// FUnçao getline para pegar um string com espaço.
        if (olhos[2]=='*')
        {
            soma += 1;
        }if (olhos[1]=='*')
        {
            soma+= 2;
        }if (olhos[0]=='*')
        {
            soma +=4;
        }
        if (strcmp(olhos,"caw caw")==0)
        {
            cout << soma << endl;
            soma = 0;
            i++;
        }
    }
    return 0;
}