#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;
    while (!cin.eof())
    {
        cout << a - 1 << endl;
        cin >> a;
    }

    return 0;
}