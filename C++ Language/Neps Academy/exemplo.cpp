#include <iostream>

using namespace std;

struct pessoa{
    char nome[50];
    int idade;
};

int main(){
    pessoa X,Y,Z;
    printf("Digite Nome:");
    scanf("%[^\n]s",X.nome);
    printf("Digite Idade:");
    scanf("%d",X.idade);
    printf("Digite Nome:");
    scanf("%[^\n]s",Y.nome);
    printf("Digite Idade:");
    scanf("%d",Y.idade);
    printf("Digite Nome:");
    scanf("%[^\n]s",Z.nome);
    printf("Digite Idade:");
    scanf("%d",Z.idade);

}