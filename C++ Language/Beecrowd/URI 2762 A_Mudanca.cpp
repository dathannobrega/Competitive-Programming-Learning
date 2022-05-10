#include <iostream>
using namespace std;

int main ()
{
    int a;
    cin >> a;
    while (!cin.eof())
    {
        if((a >=0 && a <90) || a==360)
            cout << "Bom Dia!!\n";
        else if(a>=90 && a<180)
            cout << "Boa Tarde!!\n";
        else if (a >=180 && a<270)
            cout << "Boa Noite!!\n";
        else    
            cout << "De Madrugada!!\n";


        setbuf(stdin,NULL);
        cin >> a;
    }
    
    return 0;
}