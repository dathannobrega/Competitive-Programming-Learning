#include <iostream>
using namespace std;

int main (){
    int a,b;
    cin >> a >> b;
    if(b%2!=0)
        b--;
    
    if (a>= b/2)
        cout << "Amelia tem todas bolinhas!\n";
    else
        cout << "Faltam "<< (b/2)-a <<" bolinha(s)\n";

    return 0;
}