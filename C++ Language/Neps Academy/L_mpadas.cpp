#include <iostream>
using namespace std;

int main()
{
    int j, A, I1=0, I2=0, N;
    cin >> N;
    for (j = 0; j < N; j++)
    {
        cin >> A;
        if (A == 1)
        {
            if (I1 == 0)// SE lampada 1 estiver desligada vai ligar
            {
                I1 = 1;
            }
            else// Se lampada 1 estiver ligada vai desligar
            {
                I1 = 0;
            }
        }
        else if(A== 2)// Se apertar o INterrupitor 2
        {
            if (I1 == 1)//lampada 1 ligada vai desligar
            {
                I1 = 0;
            }else//lampada 1  desligada vai ligar
            {
                I1 = 1;
            }
            if (I2 == 0)//lampada 2 desligada vai ligar
            {
                I2 = 1;
            }else //lampada 2 ligada vai desligar
            {
                I2 = 0;
            }
            
            
        }
    }
    cout << I1 << endl << I2 << endl;
    return 0;
}