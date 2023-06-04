#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,sum;
    sum=0;
    printf("enter a 3 digit no\n");
    scanf("%d",&n);
    if(n>=999){
        printf("not applicable");
    }
    while(n != 0)
    {
        sum=sum+ n%10;
        n=n/10;
    }
    printf("sum of the digits of three digit number is %d \n",sum);
    return 0;
}
