#include <iostream>

using namespace std;

int main()
{
    int f, s, g, u, d, i, clicks = 0;
    cin >> f >> s >> g >> u >> d;
    if (s < g)
    {
        if (u == 0)
        {
            printf("use the stairs\n");
            return 0;
        }
        while (s < g)
        {
            s += u;
            clicks++;
        }
    }
    if (s > g)
    {
        if (d == 0)
        {
            printf("use the stairs\n");
            return 0;
        }
        while (s > g)
        {
            s -= d;
            clicks++;
        }
    }
    if (s != g)
        printf("use the stairs\n");
    else
        cout << clicks << endl;
    return 0;
}