#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,c,n,j;
    c=0;
    j=1;
    printf("enter 10 numbers");
    for(i=1;i<=10;i++){
        scanf("%d",&n);
        c=c+n;
        j=j*n;
    }
    printf("the sum of 10 numbers is %d\n",c);
    printf("the product of 10 numbers is%d\n",j);

    return 0;
}
