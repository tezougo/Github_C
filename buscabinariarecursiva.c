#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

int buscabin(int v[],int,int,int);

int main()
{

        int u;
        int p;
        int l;
        int v[10]={1,2,3,4,5,6,7,8,9,10};
        printf("digite p ");
        scanf("%d",&p);
        printf("digite u ");
        scanf("%d",&u);

        printf("digite l ");
        scanf("%d",&l);
        printf(" busca resultou em %d", buscabin(v,p,u,l));
        return 0;
}

int buscabin(int v[],int p,int u,int l)
{
    int meio=((p+u)/2);
    if(p>u)
        return printf("nao encontrou");
    else if(v[meio]>l)
        return (buscabin(v,p,(meio-1),l));
    else if(v[meio]<l)
        return buscabin(v,meio+1,u,l);
    else if(v[meio]=l)
        printf("meio e %d e a ", meio);
        return v[meio];

}
