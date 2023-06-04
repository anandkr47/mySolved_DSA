#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("enter the dimension of an array ");
    scanf("%d",&n);
    int A[n];
    int *p=A;
    int i;
    printf("enter the array elements");
    for(i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    printf("the even numbers are\n");
    for(i=0;i<n;i++){
        if(A[i]%2==0){
            printf(" %d\t",A[i]);
        }
    }
    printf("\n");
    return 0;
}
