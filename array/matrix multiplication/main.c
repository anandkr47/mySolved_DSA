#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,a,b,c,d,k;
    printf("Enter the row of a matrix");
    scanf("%d",&a);
    printf("Enter the column of a matrix");
    scanf("%d",&b);
    int A[a][b];
    printf("Enter the row of second matrix");
    scanf("%d",&c);
    printf("Enter the column of second matrix");
    scanf("%d",&d);
    int T[a][d];
    if(a==d){
        printf("enter %d elements in first %d x %d int array",a*b,a,b);
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
        int B[c][d];
        printf("enter %d elements in second %d x %d int array",c*d,c,d);
        for(i=0;i<c;i++){
            for(j=0;j<d;j++){
                scanf("%d",&B[i][j]);
            }
        }
        printf("\nthe secoond matrix of %d elements in %d x %d int array is \n",c*d,c,d);
        for(i=0;i<c;i++){
            for(j=0;j<d;j++){
                printf("%d\t",B[i][j]);
            }
            printf("\n");
        }
        printf("\nthe multiplication of two  matrix is \n");
        for(i=0;i<a;i++){
            for(j=0;j<b;j++){
                T[i][j]=0;
                for(k=0;k<c;k++){
                    T[i][j]+=A[i][k]*B[k][j];
                }
            }
        }

        for(i=0;i<a;i++){
            for(j=0;j<d;j++){
                printf("%d\t",T[i][j]);
            }
            printf("\n");
        }
    }
    else{
        printf("\nThe maltiplication of two is not possible\n");
    }
    return 0;
}
