#include<iostream>
using namespace std;

int main ()
{
    int a,b,i;
    cin >> a >> b;
    int val[b];
    for (i = 0; i < b; i++)
    {
        cin >> val[i];
    }
    
for (i = 0; i < b; i++)
{
    if(i==b-1)
        break;
    if(val[i]+a<val[i+1] || val[i]-a>val[i+1]){
        cout << "GAME OVER\n";
        return 0;
    }
}
    cout << "YOU WIN\n";
    return 0;
}