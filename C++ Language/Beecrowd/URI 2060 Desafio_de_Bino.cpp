#include <iostream>
using namespace std;

int main ()
{
    int A,valor,du=0,tre=0,fo=0,fiv=0,i;
    cin >> A;
    for (i = 0; i < A; i++)
    {
        cin >> valor;
        if(valor % 2==0)
            du++;
        if(valor % 3==0)
            tre++;
        if(valor % 4==0)
            fo++;
        if(valor % 5 ==0)
            fiv++;
    }   
    cout << du << " Multiplo(s) de 2\n" << tre << " Multiplo(s) de 3\n" << fo << " Multiplo(s) de 4\n" << fiv << " Multiplo(s) de 5\n";


    return 0;
}