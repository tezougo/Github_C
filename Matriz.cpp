#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int lin, col, linha, coluna;
	again:
    printf("Digite quantas linhas terá a matriz (equações): ");
    scanf("%d",&linha);
    printf("Digite quantas colunas terá a matriz (variáveis): ");
    scanf("%d",&coluna);
	system("cls");
	int matriz[linha][coluna];
	if(linha!=coluna)
	{
		printf("Não é uma matriz quadrada, digite uma matriz onde o número de linhas seja igual ao número de colunas... \n\n");
		goto again;
	}
	else
	{
		for (lin = 0; lin <linha; lin++) 
	{
		if((lin==linha) && (col==coluna))
		{
			return 0;
		}
		for (col = 0; col <coluna; col++) 
		{
		
		printf("Digite o coeficientes de a(%d.%d): ", lin,col);
		scanf("%d",&matriz[lin][col]);
		}
	printf("\n");
	}
	printf("Matriz %dx%d: \n\n",linha, coluna);
	for (lin = 0; lin <linha; lin++) 
	{
		if((lin==linha) && (col==coluna))
		{
			return 0;
		}
		for (col = 0; col <coluna; col++) 
		{
		printf(" %d ", matriz[lin][col]);
		}
	printf("\n");
	}
	}
	system("pause>>null");
	return 0;
}
