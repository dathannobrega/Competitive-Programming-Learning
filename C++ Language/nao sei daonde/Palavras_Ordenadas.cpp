#include <bits/stdc++.h>

using namespace std;


string stolower(string a){// Funçao retorn uma string toda em minuscula
    string b;
    for (int i = 0; i < a.length(); i++)
    {
        b.push_back(tolower(a[i]));//push back, pq o tipo string se comporta com um vector em c++. tolower pois é a funçao que transforma char em minuscula
    }
    return b;
}


int main (){
    bool type=false;
    string a,b;
    int n,tam;
    cin >> n;
    cin.ignore();//ignore para nao ler o '\n'
    for (int i = 0; i < n; i++){
        cin >> a;
        tam - a.length()-1;// pega o tamnho da string e tira um , pois a primeira psociça oda string é 0
        cout << a;
        for (int j = 0; j <= tam; j++){
            if(a[j]==a[j+1]){
                type = true;// caso ouver duas letras igual, o programa muda a varial e break para economizar tempo.
                break;
            }
            a = stolower(a);// aqui chama-se a funçao criada
        }
        b=a;
        if(type){// se o type for verdadeiro entra no primeiro caso
            cout <<": N\n";
        }else{
            sort(b.begin(),b.end());// ordena a string 
            if(a==b){// e faz a comparassao
                cout <<": O\n";
            }else{
                cout <<": N\n";
            }
        }
        type=false;
    }

    return 0;
}