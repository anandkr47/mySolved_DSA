#include <stdio.h>
#include <stdlib.h>

void num(int a)
{
    if(a==1){
        printf("%d\n",1);
        return;
    }
     printf("%d\n",a);
    num(a-1);

}
int main()
{
    int n;
    printf("enter up to which you want to print a number\n");
    scanf("%d",&n);
    num(n);
    return 0;
}
