#include <stdio.h>
#include <stdlib.h>

void add(ad,a,b)
{
    ad=a+b;
    printf("%d",ad);
}
int main(){
    int ad,b,c;
    printf("enter two numbers to add\n");
    scanf("%d%d",&b,&c);
    printf("\nthe sum of two number is\n");
    add(ad,b,c);
    return 0;


}
