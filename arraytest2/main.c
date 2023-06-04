#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("enter the size of array\n");
    int n,i,num;
    int t=0;
    int a[10];
    int smallest;
    scanf("%d",&n);
    int arr[n];
    printf("enter the array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf(" array-----------\n");
     for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]>0)
        {
            a[t]=arr[i];
            t++;
        }
    }
     printf(" \n positive array-----------\n");
    for(i=0;i<t;i++)
    {
        printf("%d\t",a[i]);
    }
    smallest=a[0];
    for(i=1;i<t;i++)
    {
        if(smallest>a[i]){
            smallest=a[i];
        }
    }
    printf("\n%d",smallest);
    return 0;

}
