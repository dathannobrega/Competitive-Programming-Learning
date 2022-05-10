#include <iostream>
using namespace std;
 
int main() {
 
    int i,j,i1,j1;
    cin >> i1>> j1;
    int a[i1][j1];
    
    for (i = 0; i < i1; i++) {
        for (j = 0; j < j1; j++) {
            cin >> a[i][j];
        }
    }
    
    for (i = 0; i < i1; i++) {
        for (j = 0; j < j1; j++) {
         
            if (j==j1-1 || j==0)
                continue;

            if(a[i][j]==42 && a[i][j-1]==7 && a[i][j+1]==7 && a[i-1][j]==7 && a[i-1][j-1]==7 && a[i-1][j+1]==7 && a[i+1][j]==7 && a[i+1][j-1]==7 && a[i+1][j+1]==7 ){
                cout << i+1 << " "<< j+1 << endl;//+1 pois o exercicio n pega o 0.
                return 0;
            }
        }    
    }
    cout <<"0"<< " 0" << endl;
    return 0;
}