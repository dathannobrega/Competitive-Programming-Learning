#include <iostream>
using namespace std;

int main (){
    float M[12][12],soma;
    char op;
    int i,j;
    cout.precision(1);
    cout.setf(ios::fixed);
    cin >> op;
    for (i = 0; i < 12; i++)
    {
        for (j = 0; j < 12; j++)
        {
            cin >> M[i][j];
            if (j<i)
            {
                soma += M[i][j];
            }
            
        }
    }
    if (op == 'M')
    {
        cout << soma/66 << endl;
    }else
    {
        cout << soma << endl;
    }
    
    
    return 0;
}