#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b=1;
    int c=0;
    printf("enter a number to check for prime of not");
    scanf("%d",&a);
    while(b<=a){
        if(a%b==0)
            c++;
        b++;
    }
    if(c==2)
        printf("%d is a prime number",a);
    else
        printf("%d is not a prime number",a);

    return 0;
}
