#include <iostream>
using namespace std;

int main(){
    int x,i;
    cin >> x;
    for (i = 1; i <x; i++)
    {
        if (x%i==0)
        {
            cout << i << " ";
        }
        
    }
    cout << i << endl;
    return 0;
}