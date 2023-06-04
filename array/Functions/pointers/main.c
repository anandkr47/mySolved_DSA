#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    int sum=0;
    printf("enter the dimension of an array\n");
    scanf("%d",&n);
    int A[n];
    printf("\nenter the elements of a array\n");
    for (i=0;i<n;i++){
        scanf("%d",&A[i]);
    }

     for (i=0;i<n;i++){
        sum=sum+*(A+i);

    }
    printf("\nthe sum of the elements  is %d\n",sum);
    return 0;
}
