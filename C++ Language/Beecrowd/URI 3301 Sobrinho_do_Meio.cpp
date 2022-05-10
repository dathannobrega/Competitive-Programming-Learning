#include <iostream>
using namespace std;

int main()
{
    int h,z,l;
    cin >> h >> z >> l;
    if ((h>z && h<l) || (h<z && h>l) )
    {
        cout << "huguinho\n";
    }else if ((z>h && z<l) || (z<h && z>l) )
    {
        cout << "zezinho\n";
    }else if ((l>h && l<z )|| (l<h && l>z ))
    {
        cout << "luisinho\n";
    }
    
    return 0;
}