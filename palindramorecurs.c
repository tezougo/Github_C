#include <stdio.h>
#include <stdlib.h>

int palindramo(char, int);

int main()
{
    int n=0;
}

int palindramo(char palavra[],int n)
{
    int p=0,u=n-1;
    if(p<=u)
    if(palavra[p]==palavra[u])
        p++;
        u--;
        return palindramo(palavra,n);
    else if(palavra[n]==0)
        {
            u=n-1;
        }
    else
        n++;

}
