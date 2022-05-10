#include <iostream>
using namespace std;

int main ()
{
    int hr,viagem,fuso,hora;
    cin >> hr >> viagem >> fuso;
    hora = hr+viagem+fuso;
    if (hora<0)
        cout << hora+24 << endl;
    else if (hora >24)
        cout << hora-24 << endl;
    else
        cout << hora << endl;
    
}