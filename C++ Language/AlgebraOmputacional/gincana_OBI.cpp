#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,value;
    cin >> n >> m;
    for (int i = 1; i < m; i++)
    {
        if (n%i>=m) {
            value=i;
        }
    }
    
    cout << value << endl;


    return 0;
}