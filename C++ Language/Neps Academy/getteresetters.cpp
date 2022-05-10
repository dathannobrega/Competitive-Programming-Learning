#include<iostream>

using namespace std;

class humano{
    int idade;
public:
    humano(){//construtor
        idade=0;
    }
    void set_idade(int a){
        if (idade>=1 && idade <150){
            idade = a;
        }
    }
    int get_idade(){
        return idade;
    }
};

int main (){
    humano maluco;
    maluco.set_idade(35);
    cout << maluco.get_idade() << endl;

}