#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,c,i;
    c=1;
    printf("Enter a number\n");
    scanf("%d",&n);
    printf("the first 10 multiples of %d is\n",n);
    for(i=1;i<=10;i++){
            c=n*i;
            printf("\n%d x %d = %d",n,i,c);
    }
    return 0;
}
