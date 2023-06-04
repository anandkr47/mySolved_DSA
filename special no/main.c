#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,sum=0,pro=1,r,num;
    printf("enter a number to check for special number or not ");
    scanf("%d",&n);
    int t=n;
    while(t!=0){
        r=t%10;
        sum=sum+r;
        pro=pro*r;
        t=t/10;
    }
    printf("the sum of the digits of %d is %d \n",n,sum);
    printf("the product of the digits of %d is %d \n",n,pro);
    num=sum+pro;
    if(n==num)
        printf("%d is a special number",n);
    else
        printf("%d is not special number",n);
    printf("\n");
    return 0;
}
