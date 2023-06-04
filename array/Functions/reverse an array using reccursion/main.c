#include <stdio.h>
#include <stdlib.h>
void reverse(int a ,int B[]){
    int R[a];
    int i,j=0;
    for (i=a-1;i>=0;i--){
        R[j]=B[i];
        j++;
    }
     for(i=0;i<a;i++){
        printf("%d\t",R[i]);
    }
}

int main()
{
    int n,i;
    printf("enter the dimension of array\n");
    scanf("%d",&n);
    int A[n];
    printf("\nenter %d  elements of array\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    printf("the array before reversing is\n");
     for(i=0;i<n;i++){
        printf("%d\t",A[i]);
    }
    printf("\nthe array after reversing is\n");
    reverse(n,A);
    return 0;
}
