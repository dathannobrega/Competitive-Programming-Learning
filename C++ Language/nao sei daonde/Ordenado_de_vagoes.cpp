#include <bits/stdc++.h>
using namespace std;


void bubblesort(int a[],int tam){
    int aux,cont=0,mud=0;
    for (int i = 1; i <=tam; i++)
    {
        mud=0;
        for (int j = 0; j < tam-i; j++)
        {
            if (a[j] > a[j+1]) {
                aux=a[j];
                a[j]=a[j+1];
                a[j+1]=aux;
                cont++;
                mud++;
            }
        }
        if(mud==0)
            break;
    }
    cout << "A quantidade ajeitamentos deve ser "<< cont <<'.'<< endl;
}


int main(){
    int loop1,loop2;
    cin >> loop1;
    for (int i = 0; i < loop1; i++)
    {
        cin >> loop2;
        int vag[loop2],tam=0;
        for (int j = 0; j < loop2; j++)
        {
            int num;
            cin >> num;
            vag[j]=num;
            tam++;
        }
        bubblesort(vag,tam);
    }
    


    return 0;
}