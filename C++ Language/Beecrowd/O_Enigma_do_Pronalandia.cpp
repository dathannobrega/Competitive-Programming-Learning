#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int main ()
{
    int i,tam;
    char num[50];
    scanf("%s",&num);
    tam = strlen(num);
    for (i = tam-1; i >= 0; i--)
    {
        if(i==0)
            cout << num[i] << endl ;
        else
            cout << num[i];
    }
    return 0;
}