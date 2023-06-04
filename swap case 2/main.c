#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("enter first num\n");
    scanf("%d",&a);
    printf("enter second num\n");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swaping\n the first num is:  %d\n and the second mum is:  %d ",a,b);
    printf("\n");
    return 0;
}
