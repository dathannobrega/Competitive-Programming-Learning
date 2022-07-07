#include<bits/stdc++.h>
using namespace std;

int main(){
    string a,b;
    int erros=0;
    cin >> a >> b;
    sort(b.begin(),b.end());
    sort(a.begin(),a.end());
    int tam= a.length();

    if(a==b){
        cout << "S\n";
        return 0;
    }
    for (int i = tam-1; i >= 0; i--)
    {
        if(a[i]!= b[i] && b[0]=='*'){
            b.erase(b.begin());
            a.erase(a.begin()+i);
        }   
    }
    if(a==b || a.size()==0)
        cout << "S\n";
    else
        cout << "N\n";

    return 0;
}