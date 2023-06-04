#include <stdio.h>
#include <stdlib.h>

//using recursion
int power(int m ,int n)
{
    if(n!=0)
        return m*power( m,n-1);
    else
        return 1;
}
int main()
{
    int a,b;
    printf("enter the number\n");
    scanf("%d",&a);
    printf("enter the power of %d \n",a);
    scanf("%d",&b);

    printf("The value for %d of power %d is %d",a,b,power( a,b));
    return 0;
}
