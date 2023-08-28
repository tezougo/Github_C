#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int subtracao(int,int);
int main()
{
    int a,b;
    //again:
    setlocale(LC_ALL,"Portuguese");
    printf("Digite a ");
    scanf("%d", &a);
    printf("Digite b ");
    scanf("%d", &b);
    printf(" A subtração é %d\n", subtracao(a,b));
    //goto again;
    system("pause>>NULL");
    return subtracao(a,b);

}

int subtracao(int a, int b)
{
    if(b>0)
        return subtracao(a-1,b-1);
    else if(b==0)
        return a;

}
