#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> vet;
    for (int i = 0; i < N; i++)
    {
        int a;
        cin >> a;
        if(a==0){
            vet.pop_back();
        }else
            vet.push_back(a);
    }
    int valor=0;
    for (int i = 0; i < vet.size(); i++)
    {
        valor += vet[i];
    }
        cout << valor << endl;

    return 0;
}