#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

double pot(double a, int b);

int main()
{
	setlocale(LC_ALL,"portuguese");
	int exp;
	double num;
    again:
	printf("Digite o n�mero a ser elevado na pot�ncia: ");
	scanf("%lf", &num);
	printf("Digite o expoente: ");
	scanf("%d", &exp);
	printf("O Resultado �: %g\n", pot(num,exp));
	goto again;
	system("pause>>null");

}
double pot(double a, int b)
{
	double potencia=a;
	int z;
	for(z=0;z<=b;z++)
	{
		if(z==0)
		{
			potencia=1;
		}
		else
		{
			potencia*=a;
		}
	}
	return potencia;
}
