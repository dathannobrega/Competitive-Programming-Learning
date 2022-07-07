#include <bits/stdc++.h>
using namespace std;
long double fatorial(int x){
    if(x==0)
        return 1;
    return fatorial(x-1)*x;
}


int main(){
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        long double a,b,c,valor=1;
        cin >> a >> b>>c;
        //for (int x = b; i <=a; i++)
        valor=fatorial(a)/(fatorial(b)*fatorial(a-b));
        if(valor==c)
            cout <<"Harry estah correto!\n";
        else if(valor>c)
            cout <<"Existem mais combinacoes!\n";
        else
            cout <<"Existem menos combinacoes!\n";



        valor =0;
    }

    return 0;
}
