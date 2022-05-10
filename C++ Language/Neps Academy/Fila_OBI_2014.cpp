#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> N;
    int i, j, M, add, del;
    cin >> add;
    for (i = 0; i < add; i++)
    {
        int value;
        cin >> value;
        N.push_back(value);
    }

    cin >> del;
    for (i = 0; i < del; i++)
    {
        int value;
        cin >> value;
        for (j = 0; j < N.size(); j++)
        {

            if (N.at(j) == value)
            {
                N.erase(N.begin() + j);
                break;
            }
        }
    }

    for (i = 0; i < N.size(); i++)
    {
        cout << N[i]<<' ';
    }
    cout << endl;
    return 0;
}