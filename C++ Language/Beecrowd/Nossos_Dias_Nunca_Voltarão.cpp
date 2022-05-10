#include <iostream>
#include <string.h>
using namespace std;

int main ()
{
    int i,N;
    char frase[35];
    strcpy(frase,"LIFE IS NOT A PROBLEM TO BE SOLVED");
    cin >> N;
    for (i = 0; i < N; i++)
    {
        cout << frase[i];
    }
    cout << endl;
    return 0;
}