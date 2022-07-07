#include<bits/stdc++.h>
using namespace std;

//funçao fatorial Suporta ate 25!.
long double fatorial(int x){
    if(x==1){
        return 1;
    }
    return fatorial(x-1)*x;
}

//funçao pra ficar tudo minuscula na string!!
string minusculo(string a){
    for (int i = 0; i < a.length(); i++)
    {
        a[i]=tolower(a[i]);
    }
    
    return a;
}

int main(){
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        long double divfatorial=1,fat=1;
        
        //Criaçao e um map.
        //O map funciona sendo o primeiro termo o indice e o segundo oq ele guarda.
        map<char,int> mymap;
        string str;
        cin >> str;
        //passa a palavra tudo em minusculo
        str = minusculo(str);
        for (char c: str)
            mymap[c]++;
        //Crio um set para tirar todas as letras repetidas para fazer a multiplicaçao
        set <char> str1;
        for (char c:str)
            str1.insert(c);
        //por ultimo vou somando os fatoriais dos indicies do map pelo meu set
        for (char c:str1)
            divfatorial*=fatorial(mymap[c]);

        cout << fatorial(str.length())/divfatorial << endl;
    }

    return 0;
}