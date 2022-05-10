#include <iostream>
#include <bits/stdc++.h>
#include <math.h>

using namespace std;

double busca(int a[])
{
    double top = sizeof(a)-1;
    double down = 0;
    double mid = (down+top)/2;
    int i;
}

int main()
{
    int N, comp, i;
    cin >> N >> comp;
    int a[N];
    double result = 0, soma = 0;
    while (N != 0 && comp != 0)
    {
        for (i = 0; i < N; i++)
        {
            cin >> a[i];
            soma += a[i];
        }

        sort(a, a + N);

        if (soma < comp)
            cout << "-.-\n";
        else if (soma == comp)
            cout << ":D\n";
        else if (soma > comp)
        { // area=base*altura;

            cout.precision(4);
            cout.setf(ios::fixed);
            // result = ;
            cout << result << endl;
        }

        soma = 0;
        cin >> N >> comp;
    }

    return 0;
}