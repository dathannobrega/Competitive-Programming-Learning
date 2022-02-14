#include<iostream>
#include<stdio.h>
using namespace std;

int somatorio(int n)
{
    int somT;
    if (n==0)
    {
        return (1);
    }else
    {
        somT = n + somatorio(n-1);
        return somT;
    }
}



int main ()
{
    int a,i,j=1,confirm,casos=1,N,num;
    while (scanf("%d",&N)!=EOF)
    {
        num= somatorio (N);
        if(N==0)//prints iniciais caso n==0
            cout << "Caso " << casos << ": 1 numero\n";
        else{
            cout << "Caso " << casos << ": "<< num <<" numeros\n";//demais casos
        }
        cout << "0";
        
        for (i = 1; i <=N; i++,j++)//jota fica aqui pois se o J ficar no outro loop ele vai atualizar a cada loop;
        {
            for (confirm =1; confirm <=j;confirm++)
            {
                cout << " " << j;
            }
            
        }
        cout <<endl << endl;
        j=1;
        casos++;

    }
    return 0;
}