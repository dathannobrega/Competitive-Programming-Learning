#include <iostream>
#include <math.h>
using namespace std;

double binet(int a){
    double soma;
    if (a==1)
        return 1;
    else{
        soma = ((pow((1+sqrt(5))/2,a))-(pow((1-sqrt(5))/2,a-1)))/sqrt(5);
        return soma;

    }

}

int main()
{
    double b;
    int a;
    cin >> a;
    b = binet(a);
    cout.precision(1);
    cout.setf(ios::fixed);
    cout << round(b) << endl;
}