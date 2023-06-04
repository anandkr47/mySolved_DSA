#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,c,n,j;
    c=0;
    j=0;
    printf("enter 10 numbers");
    for(i=1;i<=10;i++){
        scanf("%d",&n);
        if(n%2==0){
            c=c+n;
        }else{
           j=j+n;
        }
    }
    printf("the sum of even numbers is %d\n",c);
    printf("the sum of odd numbers is%d\n",j);
    return 0;
}
