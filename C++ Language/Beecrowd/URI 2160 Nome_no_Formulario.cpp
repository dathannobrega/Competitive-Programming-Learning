#include <iostream>
#include <string.h>
using namespace std;

int main ()
{
    int b;
  char a[500];
  fgets(a,500,stdin);
  b=strlen(a)-1;
  if (b >=81)
    cout << "NO\n";
  else if(b <81)// 81 pois o /n conta
    cout << "YES\n";
    return 0;
}