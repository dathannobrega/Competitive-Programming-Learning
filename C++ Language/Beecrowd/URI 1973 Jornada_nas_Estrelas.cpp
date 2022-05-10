#include <iostream>
using namespace std;

int main (){
    int i,N,roubos=0;
    double ficou=0;
    cin >> N;

    int b[N];

    for (i = 0; i < N; i++)//preenchimento de vetor
    {
        cin >> b[i];
    }
    i = 0;

    while (i>=0 && i<N)//analise das fazendas
    {
        if(b[i]%2==0){
            if (b[i]!=0)//n dimunuir caso seja 0
                b[i]--;
            i--;
        }else if(b[i]%2!=0){
            if (b[i]!=0)//n dimunuir caso seja 0
                b[i]--;
            roubos++;
            i++;
        }
    }
    if(i<0){//como nao conta a hr de inverter deve ser adicionado caso i<0
        roubos++;
    }
    for (i = 0; i < N; i++)
    {
        ficou+=b[i];
    }
    
    cout.precision(0);
    cout.setf(ios::fixed);
    cout << roubos << " " << ficou << endl;


    return 0;
}