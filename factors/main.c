#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,f;
    printf("enter a number\n");
    scanf("%d",&n);
    printf("the factors of %d is",n);
    for(i=1;i<=n;i++){
        if(n%i==0)
            printf("\n%d",i);
    }
    return 0;
}
