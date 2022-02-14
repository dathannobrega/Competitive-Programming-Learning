#include <iostream>
using namespace std;

int main()
{
    int a, b, N, i;
    cin >> N;
    for (i = 0; i < N; i++)
    {
        cin >> a >> b;
        cout << a + b << endl;
    }

    return 0;
}