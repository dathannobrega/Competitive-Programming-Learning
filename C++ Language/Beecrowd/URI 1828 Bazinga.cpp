#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char shel[10], raj[10];
    int N,i;
    cin >> N;
    for (i = 1; i <=N; i++)
    {
        cin >> shel >> raj;
        if (strcmp(shel, raj) == 0)
        {
            cout << "Caso #" << i << ": De novo!\n"; // se for repetido ja encerra essa volta no Loop
            continue;
        }
        if (strcmp(shel, "tesoura") == 0 && strcmp(raj, "papel") == 0) // CASO 1
        {
            cout << "Caso #" << i << ": Bazinga!\n";
        }
        else if (strcmp(shel, "papel") == 0 && strcmp(raj, "pedra") == 0) // CASO 2
        {
            cout << "Caso #" << i << ": Bazinga!\n";
        }
        else if (strcmp(shel, "pedra") == 0 && strcmp(raj, "lagarto") == 0) // CASO 3
        {
            cout << "Caso #" << i << ": Bazinga!\n";
        }
        else if (strcmp(shel, "lagarto") == 0 && strcmp(raj, "Spock") == 0) // CASO 4
        {
            cout << "Caso #" << i << ": Bazinga!\n";
        }
        else if (strcmp(shel, "Spock") == 0 && strcmp(raj, "tesoura") == 0) // CASO 5
        {
            cout << "Caso #" << i << ": Bazinga!\n";
        }
        else if (strcmp(shel, "tesoura") == 0 && strcmp(raj, "lagarto") == 0) // CASO 6
        {
            cout << "Caso #" << i << ": Bazinga!\n";
        }
        else if (strcmp(shel, "lagarto") == 0 && strcmp(raj, "papel") == 0) // CASO 7
        {
            cout << "Caso #" << i << ": Bazinga!\n";
        }
        else if (strcmp(shel, "papel") == 0 && strcmp(raj, "Spock") == 0) // CASO 8
        {
            cout << "Caso #" << i << ": Bazinga!\n";
        }
        else if (strcmp(shel, "Spock") == 0 && strcmp(raj, "pedra") == 0) // CASO 9
        {
            cout << "Caso #" << i << ": Bazinga!\n";
        }
        else if (strcmp(shel, "pedra") == 0 && strcmp(raj, "tesoura") == 0) // CASO 10
        {
            cout << "Caso #" << i << ": Bazinga!\n";
        }
        else // SE RAJ GANHAR!!!
        {
            cout << "Caso #" << i << ": Raj trapaceou!\n";
        }
        setbuf(stdin,NULL);
    }
    return 0;
}