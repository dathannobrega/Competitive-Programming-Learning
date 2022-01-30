#include <iostream>
using namespace std;

int main()
{
    int x, i, validador = 0, valid, naovalid = 0;
    0;
    cin >> x;
    int number[x + 1];
    for (i = 0; i < x; i++)
    {
        cin >> number[i];
    }

    for (i = 0, valid = 1; i < x; i++)
    {
        if (number[i] == number[i - 1])
        {
            validador++;
        }
        else//
        {
            if (valid < validador)
            {
                valid = validador;
            }
            validador = 1;
        }
    }
    if (validador < valid)
    {
        valid = validador;
    }

    cout << validador << endl;

    return 0;
}