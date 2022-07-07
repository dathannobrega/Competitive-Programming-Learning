#include<iostream>
using namespace std;

//Funcao Void que recebe o vetor a ser ordenado e o seu tamanho.
void BubbleSort(int vetor[],int tam){
    int aux;
        for (int i = 1; i <=tam; i++)
        {
        //E criado uma varivel mod para contalizar se houve mudanças, pois se nao houver entendece q o vetor está ordenado.
            int mod=0;
            for (int j = 0; j < tam-i; j++)
            {

                //Se o vetor de traz for maior q seu sucessor, é feito a troca m pelo outro.
                if (vetor[j]>vetor[j+1])
                {
                    aux= vetor[j];
                    vetor[j]=vetor[j+1];
                    vetor[j+1]=aux;
                    mod++;
                }

            }
            //se nao for contabilizado mais troucas forca a funçao a acabar.
            if(mod==0)
                break;
        }
}