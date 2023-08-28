#include <stdio.h>
#include <stdlib.h>

int mdc(int,int);

int main()
{
    int a,b;
    scanf("%d", &a);
    scanf("%d", &b);
    printf("o mdc entre %d e %d e %d\n", a, b, mdc(a,b));
    return mdc(a,b);
}
int mdc(int a,int b)
{
    int resto;
    if(b!=0)
    {
        resto= a%b;
        a=b;
        b=resto;
        return mdc(a,b);
    }
    else

        return a;
}
