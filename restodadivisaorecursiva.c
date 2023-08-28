#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int resto(int,int);

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int a,b;
    scanf("%d", &a);
    scanf("%d", &b);
    printf("O resto da divisao de %d por %d é %d", a, b, resto(a,b));
    return resto(a,b);

}

int resto(int a, int b)
{
    int total=0;
    if((a<b) && (total=0))
    return 0;
    else if(a<b)
         return a;
         else
            return total=resto(a-b,b);
}
