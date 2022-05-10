#include <iostream>
using namespace std;

int main (){
    char a[14];
    cin >> a;
    int i;
    for (i = 0; i < 14; i++)
    {
        if(a[i]=='.' || a[i]=='-'){
            cout << endl; 
            continue;
        }
        cout << a[i];
    }   
    
    cout << endl;
    return 0;
}