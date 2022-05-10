#include <iostream>
using namespace std;

int main()
{
    int a[4], i;
    for (i = 0; i < 4; i++)
    {
        cin >> a[i];
    }
    for (i = 0; i < 4; i++)
    {
        if (a[i] == 1)
        {
            cout << i + 1 << endl;
        }
    }

    return 0;
}