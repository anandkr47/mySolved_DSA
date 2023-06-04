#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,sq,r1,r2;
    printf("enter a number to check for automorfic no\n");
    scanf("%d",&n);
    int t=n;
    sq=n*n;
    while(t!=0){
        r1=t%10;
        r2=sq%10;
        sq=sq/10;
        t=t/10;
    }
    if(r1==r2)
        printf("%d is automorfic no",n);
    else
        printf("%d is not automorfic number",n);
    return 0;
}
