#include <iostream>
using namespace std;

int main()
{
    int a, i;
    cin >> a;
    string pgt;
    for (i = 0; i < a; i++)
    {
        getline(cin, pgt);
        cout << "I am Toorg!\n";
    }

    return 0;
}