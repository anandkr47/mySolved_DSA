#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n;
    printf("enter the dimension of an array ");
    scanf("%d",&n);
    int A[n];
    int *ptr;
    int i;
    printf("enter the array elements\n");
    for(i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
     ptr=A;
    for(i=1;i<n;i++){
        if(*(A+i) > *ptr){
            *ptr=*(A+i);

        }
     }
    printf("\n %u is the largest array element ",*ptr);
    return 0;
}
