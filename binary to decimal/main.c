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
        r=n%10;
        c=c*2;
        b=b+r*c;
        n=n/10;
    }
    printf("%d in decimal is %ld ",d,b);
    return 0;


}
