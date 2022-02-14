#include <stdio.h>
int main()
{
	int i, j, k, l, m, X, o, loops, a, b;

	while (1)
	{
		scanf("%d", &X);
		if (X == 0) // se X for 0 ele Encerrra o Programa
			break;
		int M[X][X];

		loops = X / 2;
		if (X % 2 == 1)
		{
			loops++;
		}                            
		a = 0;
		b = X - 1;

		for (l = 1; l <= loops; l++)//a cada loop as casas da extremidades sao excluidas
		{
			for (i = a; i <= b; i++)
			{
				for (j = a; j <= b; j++)
				{
					M[i][j] = l;
				}
			}
			a++;//cada loop pula uma linha/coluna pra baixo
			b--;//e diminiu uma linha ou colouna
		}

		for (i = 0; i < X; i++)
		{
			for (j = 0; j < X; j++)
			{
				if (j == 0)
					printf("%3d", M[i][j]);
				else
					printf(" %3d", M[i][j]);
			}
			printf("\n");
		}
		printf("\n");
	}

	return 0;
}