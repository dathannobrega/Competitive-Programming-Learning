#include <iostream>
#include <vector>

using namespace std;
typedef pair<int, char> pic;

int main()
{
    int P, M, N, count = 0, X;
    char D;
    vector<pic> P1;
    cin >> P >> M >> N;
    while (P != 0 && M != 0 && N != 0)
    {
        for (int i = 0; i < N; i++)
        {
            // preenchimento mao
            for (int j = 0; j < P * M; j++)
            {
                cin >> X >> D;
                pic carta = make_pair(X, D);
                P1.push_back(carta);
            }
            if (i == 0)
            { // VIRA A PRIMEIRA CARTA DO JOGO
                cin >> X >> D;
            }
            cin >> X >> D;


        }
        for (int j = 0; j < P * M; j++)
        {
            cout << P1[j].first << endl;

        }

        cin >> P >> M >> N;
    }

    return 0;
}