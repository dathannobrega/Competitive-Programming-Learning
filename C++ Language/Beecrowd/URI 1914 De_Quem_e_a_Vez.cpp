#include <iostream>
#include <string.h>
using namespace std;

int main (){
    int i,soma,N,n1,n2;
    char nome1[50],nome2[50],esc1[6],esc2[6];
    cin >> N;
    for (i = 0; i < N; i++)
    {
        cin >> nome1 >> esc1 >> nome2 >> esc2 >> n1 >> n2;
        soma=n1+n2;
        if (strcmp(esc1,"PAR")==0)
        {
            if (soma%2==0)
                cout << nome1 << endl;
            else 
                cout << nome2 << endl;
            
        }else
        {
            if (soma%2==0)
                cout << nome2 << endl;
            else 
                cout << nome1 << endl;
        }
    }
    

    return 0;
}