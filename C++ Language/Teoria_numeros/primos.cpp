#include<bits/stdc++.h>
using namespace std;
 
bool isprime(int x){
    int cont=1;
    for(int i=1;i<x/2+1;i++){
        if(x%i==0)
            cont++;
        if(cont>2)
            return false;
    }
    return true;
}
int main() {
 
    int a;
    cin >> a;
    vector <int> num;
    for(int i=1;i<=a;i++){
        if(isprime(i))
            num.push_back(i);
    }
    num.reserve(num.size());
    cout << num[0] <<" "<< num[1] << endl;  
    
    
    return 0;
}