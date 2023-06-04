#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,pro,i=1;
    pro=1;
    printf("Enter a number\n");
    scanf("%d",&n);
    printf("the factorial %d is\n",n);
    while(i<=n){
            pro=pro*i;
            i++;
    }
    printf("%d",pro);
    return 0;
}
