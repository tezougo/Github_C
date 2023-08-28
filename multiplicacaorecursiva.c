#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int mult(int,int);

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    printf("A multiplicação entre %d e %d é igual a %d", a, b, mult(a,b));
    return mult(a,b);
}
int mult(int a, int b)
{
    if(b==0)
        return 0;
    else
    return a+mult(a,b-1);
}
