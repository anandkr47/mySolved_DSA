#include <stdio.h>
#include <stdlib.h>

void add()
{
    int a,b;
    printf("enter two numbers to add\n");
    scanf("%d%d",&a,&b);
    printf("\nthe sum of two number is\n");
    int ad=a+b;
    printf("%d",ad);
}
int main(){

    add();
    return 0;


}
