#include <iostream>

using namespace std;

int main()
{
    int T, B, ai, di, li, i, ab, db, lb, soma1, soma2;
    cin >> T;
    for (i = 0; i < T; i++)
    {
        cin >> B >> ai >> di >> li;
        soma1 = (ai + di) / 2;
        cin >> ab >> db >> lb;
        soma2 = (ab + db) / 2;

        if (li % 2 == 0)
            soma1 += B;
        if (lb % 2 == 0)
            soma2 += B;

        if (soma1 == soma2)
            cout << "Empate\n";
        else if (soma1 > soma2)
            cout << "Dabriel\n";
        else
            cout << "Guarte\n";

        soma1 = 0;
        soma2 = 0;
    }

    return 0;
}