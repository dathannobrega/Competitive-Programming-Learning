#include <iostream>

using namespace std;

int main()
{
    int i, j, soma = 0,n,id,user;
    cin >> n >> id;
    while (!cin.eof())
    {

        for (i = 0; i < n; i++)
        {
            cin >> user >> j;
            if (user == id && j == 0)
            {
                soma++;
            }
        }


        cout << soma << endl;
        cin >> n >> id;
        soma=0;
    }

    return 0;
}