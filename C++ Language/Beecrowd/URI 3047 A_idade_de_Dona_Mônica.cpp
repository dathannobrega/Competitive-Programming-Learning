#include <iostream>

using namespace std;

int main(){
    int x, y, z, SOMA;
    cin >> x >> y >> z;
    SOMA = x - (y + z);

    if(SOMA <y){
        SOMA=y;
    }
    if(SOMA<z){
        SOMA=z;
    }
    cout << SOMA << endl;
    return 0;
}