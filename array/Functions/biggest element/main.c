#include <stdio.h>
#include <stdlib.h>

int biggest(int B[],int n){
    int max=B[0];
    int i;
    for(i=1;i<n;i++){
        if(B[i]>max){
            max=B[i];
      }
    }
     return max;
}
int main()
{
    int n;
    printf("enter how many number you want to enter");
    scanf("%d",&n);
    int A[n],i;
    printf("enter the array elements\n");
    for( i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    int b=biggest(A,n);
    printf("\n%d is the biggest array element ",b);

    return 0;
}
