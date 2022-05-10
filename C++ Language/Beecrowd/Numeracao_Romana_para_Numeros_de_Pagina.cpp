#include <iostream>
using namespace std;

int main()
{
    int A;
    float soma;
    cin >> A;

    soma = A / 100;
    if (soma == 1)
        cout << "C";
    else if (soma == 2)
        cout << "CC";
    else if (soma == 3)
        cout << "CCC";
    else if (soma == 4)
        cout << "CD";
    else if (soma == 5)
        cout << "D";
    else if (soma == 6)
        cout << "DC";
    else if (soma == 7)
        cout << "DCC";
    else if (soma == 8)
        cout << "DCCC";
    else if (soma == 9)
        cout << "CM";

    soma = A % 100;

    if (soma >= 10 && soma < 20)
        cout << "X";
    else if (soma >= 20 && soma < 30)
        cout << "XX";
    else if (soma >= 30 && soma < 40)
        cout << "XXX";
    else if (soma >= 40 && soma < 50)
        cout << "XL";
    else if (soma >= 50 && soma < 60)
        cout << "L";
    else if (soma >= 60 && soma < 70)
        cout << "LX";
    else if (soma >= 70 && soma < 80)
        cout << "LXX";
    else if (soma >= 80 && soma < 90)
        cout << "LXXX";
    else if (soma >= 90 && soma < 100)
        cout << "XC";

    soma = A % 10;
    if (soma == 1)
        cout << "I\n";
    else if (soma == 2)
        cout << "II\n";
    else if (soma == 3)
        cout << "III\n";
    else if (soma == 4)
        cout << "IV\n";
    else if (soma == 5)
        cout << "V\n";
    else if (soma == 6)
        cout << "VI\n";
    else if (soma == 7)
        cout << "VII\n";
    else if (soma == 8)
        cout << "VIII\n";
    else if (soma == 9)
        cout << "IX\n";
    else
        cout << endl;

    return 0;
}