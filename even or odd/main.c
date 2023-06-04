#include <stdio.h>
#include <stdlib.h>
void evenodd(int n){
 if(n%2==0)
        printf("even");
     else
        printf("odd");
}
int main()
{
    int num;
    printf("enter a number to test for even of odd\n");
    scanf("%d",&num);
    printf("\n%d is a ",num);
    evenodd(num);
    return 0;
}


