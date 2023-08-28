#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

double fator(int n)
{
	if(n==0)
	return 1;
	else
	return n*fator(n-1);
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int x;
    while (1)
    {
    	scanf("%d",&x);
    	printf("%d : %g\n", x, fator(x));
	}

	system("pause>>null");
	return 0;

}

