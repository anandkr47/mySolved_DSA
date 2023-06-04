#include <stdio.h>
#include <stdlib.h>
void reverse(int n)
{
    int rev=0,r;
    int t=n;
    while(t!=0){
        r=t%10;
        rev=rev*10+r;
        t=t/10;
    }
    printf("%d is the reverse of %d",rev,n);

}
int main()
{
    int num;
    printf("enter a number to reverse");
    scanf("%d",&num);
    reverse(num);
    return 0;
}
