#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("enter the size!\n");
    int n,i;
    scanf("%d",&n);
    int arr[n];
    int sum=0;
    //input of array
     for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    //print the array
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            sum=sum+arr[i];
        }
    }
    printf("\n");
    printf("%d\n",sum);
    return 0;
}
