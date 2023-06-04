#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,sum=0,r,pro=1;
    printf("enter a number to check for spy no\n");
    scanf("%d",&n);
    int t=n;
    while(t!=0){
        r=t%10;
        sum=sum+r;
        pro=pro*r;
        t=t/10;
    }
    if(sum==pro)
        printf("%d is spy no",n);
    else
        printf("%d is not spy number",n);
    printf("\n");
    return 0;
}
