#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("enter the dimension of an array ");
    scanf("%d",&n);
    int A[n];
    int i,sum=0;
    printf("enter the array elements");
    for(i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    for(i=0;i<n;i++){
        if(A[i]%2!=0){
            sum=sum+A[i];
        }
    }
     printf("the sum of odd  numbers are %d ",sum);
    printf("\n");
    return 0;
}
