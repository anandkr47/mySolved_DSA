#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,a,b,k;
    printf("Enter the row of a matrix");
    scanf("%d",&a);
    printf("Enter the column of a matrix");
    scanf("%d",&b);
    int A[a][b];
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
    printf("\nthe greatest element each row of matrix is \n");
    for(i=0;i<a;i++){
        int max=A[i][0];
        for(j=1;j<b;j++){
            if(A[i][j]>max){
                max=A[i][j];
            }
        }
         for(k=0;k<b;k++){
            printf("%d\t",A[i][k]);
        }
         printf("------> %d",max);
         printf("\n");
    }
    return 0;
}
