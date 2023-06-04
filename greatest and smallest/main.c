#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    printf("enter the size of the array");
    scanf("%d",&n);
    int arr[n];
    printf("enter the array elements");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int greatest=arr[0];
    int smallest=arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]>greatest)
        {
            greatest=arr[i];
        }
        if(arr[i]<smallest)
        {
            smallest=arr[i];
        }
    }
    printf("\nthe greatest eliment=%d\n",greatest);
    printf("the smallest eliment=%d",smallest);
}
