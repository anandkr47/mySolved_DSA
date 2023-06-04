#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,a,b,c;
    printf("enter a number ");
    scanf("%d",&n);
    a=n%2;
    b=n%3;
    c=n%5;
    if(a==0 && b==0 && c==0)
        printf("ugly number");
    else
        printf("not an ugly number");
    return 0;
}
