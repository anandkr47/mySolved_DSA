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
    int T[a][b];
    printf("enter %d elements in %d x %d int array",a*b,a,b);
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            scanf("%d",&A[i][j]);
        }
    }
    printf("\nthe matrix of %d elements in %d x %d int array is \n",a*b,a,b);
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            printf("%d\t",A[i][j]);
        }
         printf("\n");
    }
     printf("\nthe transpose matrix is \n");
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            T[i][j]=A[j][i];
            printf("%d\t",T[i][j]);
        }
         printf("\n");
    }
    return 0;
}
