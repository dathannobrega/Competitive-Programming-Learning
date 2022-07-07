#include<bits/stdc++.h>
using namespace std;

int main(){
    int a;
    cin >> a;
    a-=3;
    if(a>8)
        a%=8;
    

    if(a==3)
        cout <<1 << endl;
    else if(a==4)
        cout << 2 << endl;
    else
        cout << 3 << endl;

    return 0;
}