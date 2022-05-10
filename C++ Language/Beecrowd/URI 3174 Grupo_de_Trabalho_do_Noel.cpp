#include <iostream>
#include <string.h>
#include <math.h>

using namespace std;

int main (){
    int n,i,bon=0,ar=0,mu=0,des=0;
    float soma=0;
    cin >> n;
    char a[24],prof[24];
    int hr[n];
    for (i = 0; i < n; i++)
    {
        setbuf(stdin,NULL);
        cin >> a >> prof >>hr[i];

        if(strcmp  (prof,"bonecos")==0){
            bon+= hr[i];
        }else if(strcmp(prof,"arquitetos")==0){
            ar+= hr[i];
        }else if(strcmp(prof,"musicos")==0){
            mu+= hr[i];
        }else{
            des+= hr[i];
        }
    }
    
    soma = (bon/8)+(ar/4)+(mu/6)+(des/12);
    cout.precision(0);
    cout.setf(ios::fixed);
    cout << soma << endl;
    return 0;
}