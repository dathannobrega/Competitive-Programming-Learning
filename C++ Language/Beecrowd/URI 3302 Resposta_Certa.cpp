#include <iostream>

using namespace std;

int main ()
{
    int a,b,i;
    cin >> a;
    for (i = 1; i <= a; i++)
    {
        cin >> b;
        cout << "resposta " << i << ": " << b<< endl;
    }
    

    return 0;
}