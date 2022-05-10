#include <iostream>
#include <vector>

using namespace std;
typedef pair<int, char> pic;

int main()
{
    int P, M, N, count = 0;
    //vector<pic> P1;
    cin >> P >> M >> N;
    int X;
    char S;
    int cartasmao[P];
    while (P != 0 && M != 0 && N != 0)
    {
        int k = 1, vez = 0;
        int aux = 0;
        for (int i = 0; i < N; i++)
        {
            if (count == 0) // PARA DAR AS CARTAS AS PESSOAS
            {
                for (int j = 0; j < P; j++) // COLCA Q TODOS OS PLAYERS COMEÇA COM A MESMA QTD DE CARTAS
                {
                    cartasmao[j] = M;
                }

                for (int j = 0; j < M * P; j++) // Essa parte ele distribui as cartas para cada pessoa
                {
                    cin >> X >> S;
                    //     pic cartas = make_pair(X, S);
                    //     P1.push_back(cartas);
                }
            }

            cin >> X >> S;

            if (count == 0) // se for a primeira carta
            {
                if (X == 1)
                {
                    cartasmao[0]++;
                    // essa parte configura a direçao do jogo (+1) horario (-1)antihorario
                    if (k == 1)
                        vez++;
                    if (k == -1)
                        vez--;
                    // essa parte configura a ordem de cada jogador
                    if (vez < 0)
                        vez = P;
                    if (vez == P + 2)
                        vez = 1;
                    if (vez < -2)
                        vez = P - 1;
                }
                if (X == 7)
                {
                    cartasmao[0] += 2;
                    // essa parte configura a direçao do jogo (+1) horario (-1)antihorario, por ser 7 o proximo jogador perde a vez
                    if (k == 1)
                        vez++;
                    if (k == -1)
                        vez--;
                    // essa parte configura a ordem de cada jogador
                    if (vez < 0)
                        vez = P;
                    if (vez == P + 2)
                        vez = 1;
                    if (vez < -2)
                        vez = P - 1;
                }
                count++;
                continue;
            }

            // essa parte configura a ordem de cada jogador
                if (vez < 0)
                    vez = P;
                if (vez == P + 1)
                    vez = 1;
                if (vez < -2)
                    vez = P - 2;
                if (vez < -1)
                    vez = P - 1;
                if (vez == P)
                    vez=0;

            if (X == 1)
            {
                // essa parte configura a ordem de cada jogador
                if (k==1 && vez==(P-1))
                    cartasmao[0] += 1;
                else if (k==-1 && vez==0 )
                    cartasmao[P-1] += 1;
                else if (k==-1)
                    cartasmao[vez-1] += 1;
                else
                    cartasmao[vez+1] += 1;
                // essa parte configura a direçao do jogo (+1) horario (-1)antihorario
                if (k == 1)
                    vez += 2;
                if (k == -1)
                    vez -= 2;
            }
            else if (X == 7)
            {
                // essa parte configura a ordem de cada jogador
                if (k==1 && vez==(P-1))
                    cartasmao[0] += 2;
                else if (k==-1 && vez==0 )
                    cartasmao[P-1] += 2;
                else if (k==-1)
                    cartasmao[vez-1] += 2;
                else
                    cartasmao[vez+1] += 2;
                // essa parte configura a direçao do jogo (+1) horario (-1)antihorario, por ser 7 o proximo jogador perde a vez
                if (k == 1)
                    vez += 2;
                if (k == -1)
                    vez -= 2;
            }
            else if (X == 11)
            {
                cartasmao[vez]--;
                if (k == 1)
                    vez += 2;
                if (k == -1)
                    vez -= 2;
            }
            else if (X == 12)
            {
                // essa parte configura a direçao do jogo (+1) horario (-1)antihorario
                cartasmao[vez]--;
                if (k == 1){
                    k = -1;
                    vez--;
                }
                if (k == -1){
                    k = 1;
                    vez++;
                }
            }
            else
            {
                cartasmao[vez]--;
                if (k == 1)
                    vez += 1;
                if (k == -1)
                    vez -= -1;
            }
            count++;
            for (int j = 0; j < P; j++) // Verifica quais joadores n possui mais cartas
            {
                if (cartasmao[j] == 0)
                {
                    aux = j;
                    break;
                }
            }
        }
        cout << aux+1 << endl;
        cin >> P >> M >> N;
    }
    return 0;
}