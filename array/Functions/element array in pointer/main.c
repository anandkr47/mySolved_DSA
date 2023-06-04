#include <stdio.h>
#include <stdlib.h>

int main()
{
     int i,j,a,b;
    printf("Enter the row of a matrix");
    scanf("%d",&a);
    printf("Enter the column of a matrix");
    scanf("%d",&b);
    int A[a][b];
    int *p=A;
    printf("enter %d elements in %d x %d int array",a*b,a,b);
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            scanf("%d",&A[i][j]);
        }
    }
    printf("the array elements are\n");
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            printf("%d\t",*(*(A+i)+j));
        }
        printf("\n");
    }
}
