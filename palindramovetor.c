#include <stdio.h>
#include <stdlib.h>

int palindramo(char palavra[],int);

int main()

{
    int n=0;
    char palavra[100];
    printf("Digite a palavra");
    scanf("%s",palavra);
    printf(" %d %d", palindramo(palavra,n),palavra);

}

int palindramo(char palavra[], int n)
{
    while(palavra[n]!=0)
        {
            n++;
        }
    int y,primeiro=0,ultimo=n-1;
    while(primeiro<=ultimo)
        {
            if(palavra[primeiro]==palavra[ultimo])
            {
                primeiro++;
                ultimo--;
            }
            else
            {   y=0;
                return printf(" nao e palindramo");
            }
        }
        if(y!=0)
        return printf("e palindramo");

}
