#include <bits/stdc++.h>
using namespace std;

//essa funçao recebe um vector, de onde começa a contagem (person[vector]),e quantas pessoas pulam(k)
void josephus(vector <int> person,int Index, int k){
    if(person.size()==1){
        cout << person[0] << endl;
        return;
    }

    //somamos quem é o proximo escolhido
    Index = (Index+k)% person.size();

    //aqui apagamos o escolido.
    cout << person[Index] << " ";
    person.erase(person.begin()+Index);

    //chamamos dnv com -1
    josephus(person,Index,k);
}

int main (){
    int b;
    cin >>b;
    vector <int> a;
    for (int i = 0; i < b; i++)
        a.push_back(i+1);
    
    josephus(a,0,1);

    return 0;
}