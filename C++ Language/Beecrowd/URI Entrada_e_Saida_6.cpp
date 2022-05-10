#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int i, k;
    char a[20];
    cin >> a;
    k = strlen(a);

    for (i = k - 3; i < k; i++)
    {
        if (((a[i] == '0') && (i == k - 3)) || a[i]=='.'){
            continue;
        }
        cout << a[i];
    }
    cout << '.';
    for (i = 0; i < k - 3; i++)
    { 
        if (a[i]=='.')
            continue;
        cout << a[i];
    }
    cout << endl;
    return 0;
}