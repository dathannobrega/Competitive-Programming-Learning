#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        string a;
        cin.ignore();
        cin >> a;
        sort(a.begin(), a.end(), greater<>());
        cout << a << endl;
        a.clear();
    }


    return 0;
}