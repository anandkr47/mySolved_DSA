#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("enter a first number\n");
    scanf("%d",&a);
    printf("enter a second number\n");
    scanf("%d",&b);
     if(a>b)
        printf(" %d is greater",a);
     else if(b>a)
        printf("%d is greater",b);
    printf("\n");
    return 0;
}
