#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,d,r,r2,c=1;
    int b=0;
    int sum=0;
    printf("enter a number\n");
    scanf("%d",&d);
    n=d;
    while(n!=0){
        r=n%2;
        n=n/2;
        b=b+r*c;
        c=c*10;
    }
    printf("%d in binary is %d\n",d,b);
    int t=b;
    while(t!=0){
        r2=t%10;
        sum=sum+r2;
        t=t/10;

    }
    if(sum%2==0)
        printf("%d it is evil number",d);
    else
        printf("%d it is odious number",d);
    printf("\n");
    return 0;
}
