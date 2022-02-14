#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int N, i, newto;
    char nome[50];
    cin >> N;
    for (i = 0; i < N; i++)
    {
        cin >> nome >> newto;//LE UM NOME E UM VALOR
        if (strcmp(nome, "Thor") == 0)// se o nome for igual a thor ele levantra o martelo
        {
            cout << "Y\n";
        }
        else
        {
            cout << "N\n";
        }
    }

    return 0;
}