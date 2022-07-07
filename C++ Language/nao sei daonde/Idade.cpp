#include <bits/stdc++.h>

using namespace std;

int main (){
    int n;

    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++){
        int d,m,a,d1,m1,a1,total;
        scanf("%d/%d/%d",&d,&m,&a);
        scanf("%d/%d/%d",&d1,&m1,&a1);

        total=((a-a1)*365)+((m-m1)*30)+(d-d1);// faz operaçoes descontadno datas ano =364, mes =30, dia=1 ja que estamos tratando apenas de idades, podemos 
        //descosiderar pequenas mudanças

        if(total<0){
            cout << "data de aniversário inválida\n";
        }else if((total/365)>130){
            cout << "verifiquea dara de aniversário\n";
        }else{
            cout << total/365<< endl;
        }


    }
    return 0;
}