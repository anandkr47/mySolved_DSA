#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("enter the size of an array\n");
    int n,i,j;
    scanf("%d",&n);
    int arr[n];
    int temp1,temp2;
    //input--
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    //print --
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n\n");
    //even position ko print karne ke liye
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++){
            if(i%2==0&&j%2==0)
            {
                if(arr[i]>arr[j])
                {
                    temp1=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp1;
                }
            }
             if(i%2!=0&&j%2!=0)
            {
                if(arr[i]<arr[j])
                {
                    temp2=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp2;
                }
            }
        }
    }
     for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n\n");
    return 0;
}
