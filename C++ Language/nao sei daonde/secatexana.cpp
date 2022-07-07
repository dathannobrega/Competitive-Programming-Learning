#include <bits/stdc++.h>
using namespace std;

struct secatexana
{
    double gasto;
    int pessoas;
    double media;
};

typedef struct secatexana Secatexana;

void bubblesort(Secatexana S[],int tam){
    Secatexana aux;
    int cont;
    for (int i = 1; i < tam; i++)
    {   cont=0;
        for (int j = 0; j < tam-i; j++)
        {
            if(S[j].media>S[j+1].media){
                aux=S[j];
                S[j]=S[j+1];
                S[j+1]=aux;
                cont++;
            }
        }
        if (cont==0){
            break;
        }
    }
    
}



int main (){
    int a;
    cin >> a;
    int cont=1;
    while (a!=0)
    {
        Secatexana S[a];

        int x,y;
        double media=0;
        for (int i = 0; i < a; i++)
        {
            cin >> x >> y;
            media=y/x;
            S[i].gasto=y;
            S[i].media=media;
            S[i].pessoas=x;
        }

        bubblesort(S,a);
        
        cout << "Bairro# " << cont <<":" << endl;
        double mediatotal=0,pessoas=0;
        for (int i = 0; i < a; i++)
        {
            cout << S[i].pessoas << '-' << (int)floor(S[i].media) << " ";
            mediatotal+=S[i].gasto;
            pessoas+=S[i].pessoas;
        }
        cout.precision(2);
        cout.setf(ios::fixed);
        cout << endl << "Consumo medio: " << mediatotal/pessoas << " m3." << endl;

        cont++;
        cin >> a; 
    }
    
    return 0;
}