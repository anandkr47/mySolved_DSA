#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n,d,r,c=1;
    int b=0;
    printf("enter a number\n");
    scanf("%d",&d);
    n=d;
    while(n!=0){
        r=n%8;
        b=b+r*c;
        n=n/8;
        c*=10;
    }
    printf("%d in octal is %d ",d,b);
    return 0;
}
