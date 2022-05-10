#include<iostream>
using namespace std;

int main ()
{
    int p,j1,j2,r,a;
    cin >> p;
    if(p==1){//JOGADOR 1 ESCOLHEU PAR
        cin >> j1 >> j2 >> r >> a;
        if (r==1 && a==1)
            cout << "Jogador 2 ganha!\n";
        if(r==1 && a==0)
            cout << "Jogador 1 ganha!\n";
        if (r==0 && a == 1)
            cout << "Jogador 1 ganha!\n";
        if (r ==0 && a == 0)
            if((j1+j2)%2==0)
                cout << "Jogador 1 ganha!\n";
            else
                cout << "Jogador 2 ganha!\n";


    }else//JOGAR ! ESCOLHER IMPAR
    {
        cin >> j1 >> j2 >> r >> a;
        if (r==1 && a==1)
            cout << "Jogador 2 ganha!\n";
        if(r==1 && a==0)
            cout << "Jogador 1 ganha!\n";
        if (r==0 && a == 1)
            cout << "Jogador 1 ganha!\n";
        if (r ==0 && a == 0)
            if((j1+j2)%2==0)
                cout << "Jogador 2 ganha!\n";
            else
                cout << "Jogador 1 ganha!\n";

    }
    
    return 0;
}