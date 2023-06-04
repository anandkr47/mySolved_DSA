#include <stdio.h>
#include <stdlib.h>

int fact(n){
   if(n==0)
        return 1;
    return n*fact(n-1);
}

int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    printf("the factorial %d is %d \n",n,fact(n));
}
