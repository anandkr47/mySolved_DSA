#include <stdio.h>
#include <stdlib.h>

int add(a,b)
{
    int ad=a+b;
    return ad;
}
int main(){
    int a,b;
    int (*ptr)(int,int);
    ptr=&add;
    printf("the address of add function is %u \n",ptr);
    printf("enter two numbers to add\n");
    scanf("%d%d",&a,&b);
    printf("the sum is %d",add(a,b));
    return 0;


}
