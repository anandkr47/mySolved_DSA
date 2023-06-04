#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,rev=0,r;
    printf("enter a number to check for palindrome or not");
    scanf("%d",&n);
    int t=n;
    while(t!=0){
        r=t%10;
        rev=rev*10+r;
        t=t/10;
    }
    if(n==rev)
        printf("%d is a palindrome number",n);
    else
        printf("%d is not palindrome",n);
    return 0;
}
