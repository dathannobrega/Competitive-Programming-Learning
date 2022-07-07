#include<bits/stdc++.h>
using namespace std;

typedef struct cartas{
    int num;
    char naipe;
}Cartas;

void buubleSort(Cartas C[],int tam){
    Cartas aux;
    for (int i = 0; i < tam; i++)
    {
        int acum=0;
        for (int j = 0; j < tam-i; j++)
        {
            if(C[j].naipe>C[j+1].naipe){
                aux=C[j];
                C[j]=C[j+1];
                C[j+1]=aux;
                acum++;
            }
        }
        if(acum==0)
            break;
        
    }
}

bool procuraCartas(Cartas C[],char naipe,int tam){    
    vector<int> a;
    set <int> b;
    for (int i = 0; i < tam; i++)
    {
        if(C[i].naipe==naipe ){
            a.push_back(C[i].num);
            b.insert(C[i].num);
        }
    }
    if(b.size()!=a.size())
        return false;
    else   
        return true;
}

int main(){
    string a;
    cin >> a;
    int tam = a.length()/3;
    Cartas C[tam];
    int Copas=13,Espada=13,Ouros=13,Paus=13;

    for (int i = 0,pos; i < tam*3; i+=3,pos++)
    {
        string b;
        //salva a carta!
            b += a[i];
            b += a[i+1];
            if(pos<tam){
                C[pos].naipe=a[i+2];
                C[pos].num= stoi(b);
                if(C[pos].naipe=='C')
                    Copas--;
                else if(C[pos].naipe=='E')
                    Espada--;
                else if(C[pos].naipe=='U')
                    Ouros--;
                else
                    Paus--;
            }
    }
    if(procuraCartas(C,'C',tam))
        cout << Copas<<endl;
    else
        cout <<"erro\n";
    if(procuraCartas(C,'E',tam))
        cout << Espada<<endl;
    else
        cout <<"erro\n";
    if(procuraCartas(C,'U',tam))
        cout << Ouros<<endl;
    else
        cout <<"erro\n";
    if(procuraCartas(C,'P',tam))
        cout << Paus<<endl;
    else
        cout <<"erro\n";



    return 0;
}