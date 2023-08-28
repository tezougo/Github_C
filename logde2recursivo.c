#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int logr2(int);

int main()
{
    int n;
    scanf("%d", &n);
    return logr2(n);

}

int logr2(int n)
{
    if(n==1)
        return 0;
    return 1+logr2(n/2);
}
