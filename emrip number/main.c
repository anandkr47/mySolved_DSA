#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,r,t,rev=0,p,c=0,j;
    printf("enter a prime number \n");
    scanf("%d",&n);
    t=n;

    while(t!=0){
        r=t%10;
        rev=rev*10+r;
        t=t/10;
    }
    int a=0;
    p=rev;
    int b=1;
    while(b<=p){
        if(p%b==0)
            c++;
        b++;
    }
    if( c==2) {
        printf("%d is emrip number ",n);
    }
    else
        printf("not");

    return 0;
}
