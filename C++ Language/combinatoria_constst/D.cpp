#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin>> a >>b;
    double base=pow(26,3)*pow(9,4);


    if(pow(26,a)*pow(9,b)==base)
        cout << "A nova codificacao eh igual!\n";
    else if(pow(26,a)*pow(9,b)>base)
        cout << "A nova codificacao eh maior!\n";
    else
        cout << "A nova codificacao eh menor!\n";

    return 0;
}