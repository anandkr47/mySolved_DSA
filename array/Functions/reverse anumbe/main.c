#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("enter a number to reverse");
    scanf("%d",&n);
    int num=n;
    int rev=0,r;
    int *pr=&rev;
    int *t=&n;
    while(*t!=0){
        r=(*t)%10;
        *pr=(*pr*10)+r;
        *t=(*t)/10;
    }
    printf("%d is the reverse of %d",*pr,num);

    return 0;
}
