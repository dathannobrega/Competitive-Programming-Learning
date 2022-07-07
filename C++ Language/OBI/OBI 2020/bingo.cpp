//!!TLE!!

#include<bits/stdc++.h>
using namespace std;

//n = qtd de cartela
// k = numeros por cartela
//u = o maior numero q pode existir

int main(){

    int n,k,u;
    cin >> n >> k >> u;
    vector <int>acabou;
    set<int> myset[n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            int num;
            cin >> num;
            myset[i].insert(num);
        }
    }
    int cont=0;
    for (int i = 0; i < u; i++) {
        int num;
        cin >> num;
        for (int j = 0; j < n; j++) {
            myset[j].erase(num);
        }
        if(i>=k-1){
            for (int j = 0; j < n; j++) {
                if(myset[j].empty()){
                    acabou.push_back(j+1);
                    cont=1;
                }
            }
        }
        if(cont==1)
            break;
    }
    int tam=acabou.size();
    for (int i = 0; i < tam; i++)
    {
        if(i==tam-1)
            cout << acabou[i] <<endl;
        else
            cout << acabou[i] <<" ";
    }
    
    return 0;
}