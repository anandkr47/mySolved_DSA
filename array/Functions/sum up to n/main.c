#include <stdio.h>
#include <stdlib.h>

int num(int a)
{
    if(a!=0){
        return a+num(a-1);
    }
    else
        return a;
}
int main()
{
    int n;
    printf("enter up to which you want to print a number\n");
    scanf("%d",&n);
    printf("the sum of numbers upto %d is %d \n",n,num(n));
    return 0;
}
