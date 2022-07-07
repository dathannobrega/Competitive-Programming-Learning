#include<bits/stdc++.h>
using namespace std;

long double fatorial(int x){
    if(x==0)
        return 1;
    return fatorial(x-1)*x;
}

int main(){
    int N;
    cin >> N;
    set <int> a;
    for (int i = 0; i < N; i++)
    {
        a.clear();
        for (int j = 0; j < 6; j++)
        {
            int k;
            cin >> k;
            a.insert(k);
        }
        long double result=fatorial(a.size())/fatorial((a.size()-4));
        cout << result << endl;
    }


    return 0;
}