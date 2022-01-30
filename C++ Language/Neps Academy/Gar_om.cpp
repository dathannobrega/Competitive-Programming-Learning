#include <iostream>
using namespace std;

int main()
{
    int loop, latas, copos, i = 0, caiu = 0;
    cin >> loop;
    while (i < loop)
    {
        cin >> latas >> copos;
        if (latas > copos)
        {
            caiu += copos;
        }
        i++;
    }
    cout << caiu << endl;
    return 0;
}