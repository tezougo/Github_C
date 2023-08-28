#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int x, y, *p;
    y=0;
    p=&y;
    x=*p;
    x=4;
    (*p)++;
    --x;
    (*p) += x;
    printf("x: %d y: %d p: %d", x, y, *p);

	system("pause>>null");
	return 0;

}

