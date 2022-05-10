#include <iostream>
using namespace std;

int main ()
{
    int Id,N,i;
    float qts,valor=0;
    cin >> N;
    for (i = 0; i < N; i++)
    {
        cin >> Id >> qts;
        switch (Id)
        {
        case 1001:
            valor += qts*1.5;
            break;
        case 1002:
            valor += qts*2.5;
            break;
        case 1003:
            valor += qts*3.5;
            break;
        case 1004:
            valor += qts*4.5;
            break;
        case 1005:
            valor += qts*5.5;
            break;
        }
        
    }
    
    cout.precision(2);
    cout.setf(ios::fixed);
    cout << valor << endl;
    return 0;
}