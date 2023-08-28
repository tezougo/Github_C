#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int divi(int, int);

int main()
{
    int a,b;
    again:
    scanf("%d",&a);
    scanf("%d",&b);
    printf("%d/%d=%d\n",a,b,divi(a,b));
    goto again;

}

int divi(int a, int b){
//    int total =0;
//    if(a-b==1)
//        return 1;
//    else if(a<b)
//        return 0;
//        else if((a==b) && (total=0))
//                return 1;
//             else
//                return total=1+divi(a-b,b);
    if(a<b)
        return 0;
    else if(a==b)
        return 1;
    else if(a>b)
        return 1+divi(a-b,b);
}
