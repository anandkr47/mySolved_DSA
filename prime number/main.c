#include <stdio.h>
#include <stdlib.h>

void prime(int num)
{
     if(num%2==0)
        printf("even");
     else
        printf("odd");
}

int main()
{
    int num;
    printf("enter a number to test for even of odd\n");
    scanf("%d",&num);
    printf("\n%d is a ",num);
    prime(num);
    return 0;
}
