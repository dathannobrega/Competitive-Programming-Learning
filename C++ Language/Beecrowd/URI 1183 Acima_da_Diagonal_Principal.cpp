#include <iostream>
using namespace std;

int main()
{
    double M[12][12], soma = 0;
    char op;
    int i, j;
    cin >> op;
    cout.precision(1);
    cout.setf(ios::fixed);
    for (i = 0; i <12; i++)
    {
        for (j = 0; j < 12; j++)
        {
            cin >> M[i][j];
            if (j >0 + i)
            {
                soma += M[i][j];
            }
        }
    }
    if (op == 'M')
    {
        cout << soma / 66 << endl;
    }
    else
    {
        cout << soma << endl;
    }

    return 0;
}