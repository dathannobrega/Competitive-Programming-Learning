#include <iostream>
using namespace std;

int main()
{
    int a, base = 99999, N, i;
    cin >> N;
    int sus[N];
    for (i = 0; i < N; i++)
    {
        cin >> sus[i];
        if (sus[i] < base)
        {
            a = i + 1;
            base = sus[i];
        }
    }
    cout << a << endl;
    return 0;
}