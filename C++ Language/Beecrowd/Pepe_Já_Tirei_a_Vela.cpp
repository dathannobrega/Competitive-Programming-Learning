#include <iostream>
using namespace std;

int main()
{
    int a, i, hr, min, acao;
    cin >> a;
    for (i = 0; i < a; i++)
    {
        cin >> hr >> min >> acao;
        if (acao == 1)
        {
            if(min <10 && hr<10)
                cout << "0" <<hr << ":"<< "0" << min << " - A porta abriu!\n";
            else if (min<10)
                cout << hr << ":"<< "0" << min << " - A porta abriu!\n";
            else if (hr<10)
                cout << "0" << hr << ":" << min << " - A porta abriu!\n";
            else
                cout << hr << ":" << min << " - A porta abriu!\n";
        }
        else
        {
            if(min <10 && hr<10)
                cout << "0" <<hr << ":"<< "0" << min << " - A porta fechou!\n";
            else if (min<10)
                cout << hr << ":"<< "0" << min << " - A porta fechou!\n";
            else if (hr<10)
                cout << "0" << hr << ":" << min << " - A porta fechou!\n";
            else
                cout << hr << ":" << min << " - A porta fechou!\n";
        }
    }

    return 0;
}