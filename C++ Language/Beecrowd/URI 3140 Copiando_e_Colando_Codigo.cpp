#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int tam;
    string a;//Cria uma variavel string e um variavel para pegar o tamanho
    while (1)
    {
        getline(cin, a);// Faz a leitura da linha
        tam = a.length();//pega o tamanho da string     
        if (a[tam - 1] == '>' && a[tam - 2] == 'y' && a[tam - 3] == 'd')//verifica se as ultimas letras forma "<body>"
        {
            break;//se sim break.
        }
    }

    while (1)
    {

        getline(cin, a);//agr faço a leitura do que pode estar dentro da string
        tam = a.length();//pego o tamanho para analisar
        if (a[tam - 1] == '>' && a[tam - 2] == 'y' && a[tam - 3] == 'd')//verifica se as ultimas letras forma "<body>"
        {
            break;
        }
        cout << a << endl;//se nao for um body, entende-se que ainda está entre eles e imprime.
    }

    return 0;
}