#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n;
    printf("enter the array dimension");
    scanf("%d",&n);
    int A[n],B[n];
    printf("enter the array elements\n");
    for(i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    printf("the array before reversing is\n");
    for(i=0;i<n;i++){
        printf("%d\t",A[i]);
    }
    int j=0;
    for(i=n-1;i>=0;i--){
        B[j]=A[i];
        j++;
    }
    printf("\nthe array after reversing is\n");
    for(i=0;i<n;i++){
        printf("%d\t",B[i]);
    }
    return 0;
}
