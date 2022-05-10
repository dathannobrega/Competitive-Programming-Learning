#include <iostream>
using namespace std;

int main()
{
    int x, i, validador = 1, valid=0;//Definir as Varaiveis que vao ser usadas no programa
    cin >> x;//leitura da quantidade de Numeros que serao lidos
    int number[x];//definimos tmb o tamnho de vetor
    for (i = 0; i < x; i++)
    {
        cin >> number[i];//Com esse For estamos gravando o nosso vetor com todos os numeros escaneados;
    }

    for (i = 0; i <= x; i++)
    {
        if (number[i] == number[i - 1]); //se o numero for igual ao seu antecessor no Vetor é adicionado 1 ao nosso validador 
        {
            validador++;
        }else //caso o numero nao Seja igual ao antecessor
        {

            if (validador>valid)//a nossa variavel Valid recebe
            {
                valid = validador;
                validador=1;
            }else
            {
                validador=1;
            }
            
        }
    }
    cout << valid << endl;

    return 0;
}