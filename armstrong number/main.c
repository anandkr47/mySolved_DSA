#include <stdio.h>
#include <stdlib.h>
void armstrong(int n){
int t=n;
int r,sum=0;
    while(t!=0){
        r=t%10;
        sum=sum+(r*r*r);
        t=t/10;
    }
    if(n==sum)
        printf("%d is an armstrong no",n);
    else
        printf("%d is not an armstrong no",n);
}
int main()
{
    int num;
    printf("enter a number to check for armstrong\n");
    scanf("%d",&num);
    armstrong(num);
    return 0;
}
