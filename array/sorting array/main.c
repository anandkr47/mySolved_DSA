#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[10];
    int k,i,j;
    printf("enter the array elements");
    for(i=0;i<10;i++){
        scanf("%d",&A[i]);
    }
    for(i=0;i<=8;i++){
        for(j=i+1;j<=9;j++){
                if(A[i]>A[j]){
                    k=A[i];
                    A[i]=A[j];
                    A[j]=k;
                }
        }
    }
    printf("the shorted array is\n");
    for(i=1;i<=9;i++){
        printf("%d\t",A[i]);
    }
    return 0;
}
