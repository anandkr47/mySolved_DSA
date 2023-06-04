#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("enter a number to test for positive or negative\n");
    scanf("%d",&num);
     if(num>0)
        printf(" %d is positive",num);
     else if(num<0)
        printf("%d is negative",num);
    else
        printf(" it is zero value");
    printf("\n");
    return 0;
}
