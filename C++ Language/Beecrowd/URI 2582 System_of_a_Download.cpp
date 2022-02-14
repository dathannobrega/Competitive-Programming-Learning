#include<iostream>
using namespace std;

int main(){
    int i,N,a,b,soma;
    cin >> N;
    for (i = 0; i < N; i++)
    {
        cin >> a >> b;
        soma = a+b;
        if (soma==0)
        cout << "PROXYCITY\n";
        if (soma==1)
        cout << "P.Y.N.G.\n";
        if (soma==2)
        cout << "DNSUEY!\n";
        if (soma==3)
        cout << "SERVERS\n";
        if (soma==4)
        cout << "HOST!\n";
        if (soma==5)
        cout << "CRIPTONIZE\n";
        if (soma==6)
        cout << "OFFLINE DAY\n";
        if (soma==7)
        cout << "SALT\n";
        if (soma==8)
        cout << "ANSWER!\n";
        if (soma==9)
        cout << "RAR?\n";
        if (soma==10)
        cout << "WIFI ANTENNAS\n";
        
    }
    return 0;
}