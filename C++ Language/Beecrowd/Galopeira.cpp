#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main()
{
    int i, N;
    double b;
    char a[10000];
    cin >> N;
    cout.precision(2);
    cout.setf(ios::fixed);

    for (i = 0; i < N; i++)
    {
        setbuf(stdin, NULL);
        scanf("%s",&a);
        b = strlen(a) * 0.01;

        cout << b << "\n";
    }

    return 0;
}