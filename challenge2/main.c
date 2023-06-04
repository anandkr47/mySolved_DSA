#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n");
    int i,j,n;
    int t;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
            t=-1;
            for(j=i+1;j<n;j++)
            {
                if(arr[i]>arr[j]&&arr[j]<arr[i])
                    t=arr[j];
                    break;
            }
            printf("%d ",t);

    }
    return 0;
}
