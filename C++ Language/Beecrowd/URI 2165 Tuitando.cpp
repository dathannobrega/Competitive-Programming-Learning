#include <iostream>
#include <string.h>

using namespace std;

int main ()
{
    int a;
    char b[500];
    fgets(b,500,stdin);
    a = strlen(b)-1;
    if (a<=140)
    {
        cout << "TWEET\n";
    }else
    {
        cout << "MUTE\n";
    }
    
    

    return 0;
}