#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("enter any positive or negative number\n");
    scanf("%d",&num);
    int absolute=abs(num);
    printf("absolute value of |%d| is %d : ",num,absolute);
    return 0;
}
