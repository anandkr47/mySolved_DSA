#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    int sum=0;
    int *p;
    printf("enter the dimension of an array\n");
    scanf("%d",&n);
    int A[n];
    printf("\nenter the elements of a array\n");
    for (i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    p=A;
     for (i=0;i<n;i++){
        if(*(A+i)%2==0){
            *p= *(A+i);
            sum=sum+*p;
        }
    }
    printf("\nthe sum of the even elements  is %d\n",sum);
    return 0;
}
