#include <stdio.h>

void hanoi(int origem, int aux, int destino, int n)// objetivo mover ultimo disco para o destino
{
	if (n == 1)
	{
		printf("Mova um disco da %d para a %d.\n", origem, destino);
	}
	else
	{
		hanoi(origem, destino, aux, n - 1);//movendo os discos que estao em cima do ultimo
		hanoi(origem, aux, destino, 1);//movendo o ultimo
		hanoi(aux, origem, destino, n - 1);// movento tudo para o o local do ultimo
	}
}

int main()
{
	int origem, aux, destino, n;
	printf("Digite a origem: ");
	scanf("%d", &origem);
	printf("Digite o aux: ");
	scanf("%d", &aux);
	printf("Digite o destino: ");
	scanf("%d", &destino);
	printf("Digite o n: ");
	scanf("%d", &n);
	hanoi(origem, aux, destino, n);
	// hanoi(1, 2, 3, 3);
	return 0;
}
