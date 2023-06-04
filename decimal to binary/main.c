#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,d,r,c=1;
    long b=0;
    printf("enter a number\n");
    scanf("%d",&d);
    n=d;
    while(n!=0){
        r=n%2;
        n=n/2;
        b=b+r*c;
        c=c*10;
    }
    printf("%d in binary is %ld ",d,b);
    return 0;
}
