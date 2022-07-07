//Josephus Recursivo, Muita pouca Interação, usada apenas em problemas basicos.
int Josephus(int tam,int k){
    return tam > 1 ? (Josephus(tam-1,k)+k-1)%tam+1:1;
}

//Essa funçao é Muito interativa, provavelmente da para usar em todos os exercicios.
//recebe um vector,o Primeiro a morrer e como é feita a contagem
//O K é quanto vao pular  e o index é a partir de qual numero sera contado
void Joshephus(vector<int> person, int k, int index)
{
    //Caso basico, se tiver uma pessoa, ela é a unica sobrevivente.
    if (person.size() == 1) {
        cout << person[0] << endl;
        return;
    }
 
    // procura pela proxima pessoa A morre.
    index = ((index + k) % person.size());

    // Se quiser printar as pessoas q estao saindo o print vem aqui.      
    //Remove a Primeira Pessoa q Vai ser Morta.
    person.erase(person.begin() + index);
    // chama a proxima pessoa q vai morrer
    Joshephus(person, k, index);
}