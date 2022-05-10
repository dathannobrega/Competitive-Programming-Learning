#include <iostream>
using namespace std;

int main(){
    int N,i,soma=0;
    cin >> N;
    int valores[N];
    for (i = 0; i < N; i++)
    {
        cin>> valores[i];
        if (valores[i]==0 && valores[i-1]==0 && valores [i-2]==1)
        {
            soma++;
        }
        
    }
    cout << soma << endl;
    return 0;
}