#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,dia,chegou,total=1;
    cin >> dia >> a >> chegou;
    int soma;
    if(chegou>15){
        total = (14*a+dia)*(32-chegou);
    }else{
        total= ((chegou-1)*a+dia)*(32-chegou);
    }


    cout <<total << endl;


return 0;}
