#include <iostream>
using namespace std;

int main()
{
    int n, i, rewards, vezes = 0;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> rewards;
        if (rewards == 1)
            vezes += 0;
        else if (rewards == 2 || rewards == 3)
            vezes++;
    }

    cout << vezes << endl;
    return 0;
}