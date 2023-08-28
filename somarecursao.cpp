#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int soma(int,int);

int main()
{
    int a, b;
    again:
    setlocale(LC_ALL, "Portuguese");
    printf("Digite o A: ");
    scanf("%d", &a);
    printf("Digite B: ");
    scanf("%d", &b);
    printf("O A é %d, o B é %d a soma é %d \n", a, b, soma(a,b));
    goto again;
	system("pause>>null");

}

int soma(int a, int b)
{
	if (b==0)
	return a;
	else
	return soma(a+1,b-1);
}
