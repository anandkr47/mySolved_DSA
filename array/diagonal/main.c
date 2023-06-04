#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,a;
    printf("Enter the row of a square matrix  ");
    scanf("%d",&a);
    int A[a][a];
    printf("enter %d elements in %d x %d int array\n",a*a,a,a);
    for(i=0;i<a;i++){
        for(j=0;j<a;j++){
            scanf("%d",&A[i][j]);
        }
    }
    printf("the matrix is\n");
    for(i=0;i<a;i++){
        for(j=0;j<a;j++){
            printf("%d\t",A[i][j]);
        }
        printf("\n");
    }
    printf("\nthe diagonal elements of matrix is \n");
    for(i=0;i<a;i++){
        for(j=0;j<a;j++){
            if(i<=j)
                printf("%d\t",A[i][j]);
        }
        printf("\n");
    }

    return 0;
}
