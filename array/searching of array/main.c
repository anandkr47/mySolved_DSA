#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("enter the dimension of an array ");
    scanf("%d",&n);
    int A[n];
    int k,i,f=-1;
    printf("enter the array elements");
    for(i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    printf("enter an elements");
    scanf("%d",&k);
    for(i=0;i<n;i++){
        if(k==A[i]){
            f=i;
            break;
        }
    }
    if(f==-1)
        printf("\nelement not found");
    else
        printf("\nelement found at %d index",i);
    return 0;
}
