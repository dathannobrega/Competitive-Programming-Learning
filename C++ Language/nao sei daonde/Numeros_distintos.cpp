#include <bits/stdc++.h>

using namespace std;

int main (){
    int a,b;
    cin >> a;
    set <int> num;
    for (int i = 0; i < a; i++){
        cin >> b;
        num.insert(b);
    }
    cout << num.size() << endl;
    return 0;
}