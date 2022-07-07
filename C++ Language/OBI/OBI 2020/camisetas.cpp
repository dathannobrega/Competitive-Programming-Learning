#include<bits/stdc++.h>
using namespace std;

map<int,int> vet;

int main(){
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int num;
        cin >>num;
        vet[num]++;
    }
    
    int p,m;
    cin>> p >> m;
    vet[1]-=p;
    vet[2]-=m;
    if( vet[1]!= 0 || vet[2]!=0)
        cout << "N\n";
    else    
        cout <<"S\n";



    return 0;
}