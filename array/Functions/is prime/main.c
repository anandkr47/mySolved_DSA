#include <stdio.h>
#include <stdlib.h>
int isprime(int n1){
    int b=1,c=0;
    while(b<=n1){
        if(n1%b==0)
            c++;
        b++;
    }
    if(c==2)
        return 1;
    else
        return 0;
}
int main()
{
    int n;
    printf("enter a number to check for prime\n");
    scanf("%d",&n);
    int p=isprime(n);
    if(p==1)
        printf("%d is prime number",n);
    else
        printf("%d is not prime",n);
    return 0;
}
