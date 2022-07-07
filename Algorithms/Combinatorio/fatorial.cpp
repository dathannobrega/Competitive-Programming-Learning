#include<bits/stdc++.h>
using namespace std;

long double fatorial(long double x){
    if(x==1)
        return 1;
    return x*fatorial(x-1);
}

int main(){
    long double a;
    cout << "escolha um numero\n";
    cin >> a;

    cout.precision(0);
    cout.setf(ios::fixed);
    cout <<"Fatorial: " << fatorial(a) << endl;

    return 0;
}