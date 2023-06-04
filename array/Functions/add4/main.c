#include <stdio.h>
#include <stdlib.h>

int add(n1,n2)
{
    int ad=n1+n2;
    return ad;
}
int main(){
    int a,b;
    printf("enter two numbers to add\n");
    scanf("%d%d",&a,&b);
    printf("\nthe sum of two number is\n");
    int n=add(a,b);
    printf("%d",n);
    return 0;


}
