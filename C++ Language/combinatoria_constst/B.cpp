#include<bits/stdc++.h>
using namespace std;

int main(){
    int x,N;
    long double valor=1;
    cin >> N;
    for (int i = 0; i < N; i++)
    {   
        cin >> x;
        //fatoral
        for(int j=0;j<3 ; j++,x--){
            valor *=x;
        }
        cout << valor<<endl;
        valor=1;
    }

    return 0;
}