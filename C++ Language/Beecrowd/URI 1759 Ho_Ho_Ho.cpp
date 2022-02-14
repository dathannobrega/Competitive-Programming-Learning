#include <iostream>
using namespace std;
int main (){
    int i,n;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        if(i==n)
        {
            cout << "Ho!" << endl;
            break;
        }
        cout << "Ho ";
    }
    return 0;
}