#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a < b + c && b < a + c && c < a + b)// IF PARA CADA CASO QUE TRIANGULO N È POSSIVEL
        cout << "S\n";
    else if (d < b + c && b < d + c && c < d + b)// IF PARA CADA CASO QUE TRIANGULO N È POSSIVEL
        cout << "S\n";
    else if (a < d + c && d < a + c && c < a + d)// IF PARA CADA CASO QUE TRIANGULO N È POSSIVEL
        cout << "S\n";
    else if (a < b + d && b < a + d && d < a + b)// IF PARA CADA CASO QUE TRIANGULO N È POSSIVEL
        cout << "S\n";
    else
        cout << "N\n";

    return 0;
}