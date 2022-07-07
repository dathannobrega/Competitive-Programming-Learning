#include<bits/stdc++.h>
using namespace std;

int main(){
    int vic=0;
    for (int i = 0; i < 6; i++)
    {
        char c;
        cin >> c;
        if(c=='V')
            vic++;
    }
    if(vic>=1 && vic <3)
        cout << "3\n";
    else if(vic>=3 && vic <5)
        cout << "2\n";
    else if(vic>=5 && vic <7)
        cout << "1\n"; 
    else 
        cout <<"-1\n";


    return 0;
}