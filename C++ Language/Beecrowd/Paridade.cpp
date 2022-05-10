#include <iostream>
#include <string.h>

using namespace std;
 
int main() {
 
    char a[100],i,soma=0;
    cin >> a;
    for (i = 0; i < strlen(a); i++)
    {
        soma+=a[i];
    }
    if (soma%2==0)
        cout << a << "0\n";
    else
        cout << a << "1\n";
    
 
    return 0;
}