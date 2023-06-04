#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,sum=0,r;
    printf("enter a number to check for niven or not ");
    scanf("%d",&n);
    int t=n;
    while(t!=0){
        r=t%10;
        sum=sum+r;
        t=t/10;
    }
    printf("\nthe sum of the digits of %d is %d\n\n",n,sum);
    if(n%sum==0){
        printf("%d is divisible by %d \n",n,sum);
        printf("\n%d is a niven number",n);
    }else
        printf("%d is not niven number",n);
    printf("\n");
    return 0;
}
