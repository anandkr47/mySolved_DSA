#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,key,m;
    int s=0;
    printf("enter the length of an array ");
    scanf("%d",&n);
    int e=n-1;
    int A[n];
    printf("enter the eliments of an array");
    for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    printf("enter the eliment you want to search ");
    scanf("%d",&key);
    while(s<=e){
        m =(s+e)/2;
        if(A[m]==key){
            printf("eliment found at %d",m);
            break;
        }
        else if(A[m]>key)
            return m-1;
        else if(A[m]<key)
            return m+1;
        else
            return -1;
    }
    return 0;
}
