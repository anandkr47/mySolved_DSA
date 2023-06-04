#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n,r,p,i=0,sum=0;
    printf("enter a number to check for decerium no\n");
    scanf("%d",&n);
    int t=n;
    int v=n;
    while(v!=0){
        i=i+1;
        v=v/10;
    }

    while(t!=0){
        r=t%10;
        p=pow(r,i);
        sum=sum+p;
        i--;
        t=t/10;
    }
    if(sum==n)
        printf("%d is decirium no",n);
    else
        printf("%d is not a decerium no",n);
    return 0;
}
