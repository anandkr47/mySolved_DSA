#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("enter first num\n");
    scanf("%d",&a);
    printf("enter second num\n");
    scanf("%d",&b);
    int *p1=&a;
    int *p2=&b;
    c=*p1;
    *p1=*p2;
    *p2=c;
    printf("after swaping\n the first num is:  %d\n and the second mum is:  %d ",a,b);
    return 0;
}
