#include <stdio.h>
#include <stdio.h>

int fat(int);

int main()
{
    int n;
    printf("Digite o numero que deseja para realizar o fatorial: ");
    scanf("%d", &n);
    printf("o fatorial de %d e %d", n, fat(n));
    return fat(n);
}

int fat(int n)
{
    if(n==0)
        return 1;
    else
        return n*fat(n-1);
}
