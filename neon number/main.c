#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,sum=0,r;
    printf("enter a number to check for neon or not ");
    scanf("%d",&n);
    int sq=n*n;
    int t=sq;
    while(t!=0){
        r=t%10;
        sum=sum+r;
        t=t/10;
    }
    printf("\nthe square of the %d is %d\n\n",n,sq);
    printf("\nthe sum of the digits of %d is %d\n\n",sq,sum);
    if(sum==n){
        printf("\n%d is a neon number",n);
    }else
        printf("%d is not neon number",n);
    printf("\n");
    return 0;
}
