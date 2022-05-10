#include<iostream>
#include<math.h>
using namespace std;

int main ()
{
    double a,b,c,soma,soma_area;
    while (1)
    {
        cin >> a;
        if (a==0)
            break;
        
        cin >> b >> c;
        soma_area=100/c;
        soma=a*b*soma_area;
        cout.precision(0);
        cout.setf(ios::fixed);
        cout << floor(sqrt(soma)) << endl;
    }
    return 0;
}