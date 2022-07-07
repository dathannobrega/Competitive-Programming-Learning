// Programa para Calcular Fatoriais de Numeros Grandes
#include<iostream>
using namespace std;
// numero maximo de Digitos
#define MAX 500

int multiply(int x, int res[], int res_size);

// essa funçao acha o fatorial de grandes numeros
// e printa eles
void factorial(int n)
{
	int res[MAX];

	// inicializa o resultado
	res[0] = 1;
	int res_size = 1;

	// aplica a formula smples do fatorial n! = 1 * 2 * 3 * 4...*n
	for (int x=2; x<=n; x++)
		res_size = multiply(x, res, res_size);

	//Printa o Resultado;
	for (int i=res_size-1; i>=0; i--)
		cout << res[i];
}

// Esta função multiplica x pelo número
// representado por res[].
// res_size é o tamanho de res[] ou número de dígitos no
// número representado por res[]. Esta função usa 
// matemática simples escolar para multiplicação.
// Esta função pode ter o valor de res_size e retorna o
// novo valor de res_size
int multiply(int x, int res[], int res_size)
{
	int carry = 0; // ninicializa o carry

	// One by one multiply n with individual digits of res[]
	for (int i=0; i<res_size; i++)
	{
		int prod = res[i] * x + carry;

		// Store last digit of 'prod' in res[]
		res[i] = prod % 10;

		// Put rest in carry
		carry = prod/10;
	}

	// Put carry in res and increase result size
	while (carry)
	{
		res[res_size] = carry%10;
		carry = carry/10;
		res_size++;
	}
	return res_size;
}

int main()
{
	factorial(5);
	return 0;
}
