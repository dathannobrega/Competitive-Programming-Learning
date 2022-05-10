#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int car=0,people=0,ent;
    char c[10];
    cin >> c;
    while(strcmp(c,"ABEND")==1)
    {
        cin >> ent;
        if(strcmp(c,"SALIDA")==0){
            people+=ent;
            car++;
        }else{
            people-= ent;
            car--;
        }
        cin >> c;
    }
    cout << people << endl << car << endl;

    return 0;
}