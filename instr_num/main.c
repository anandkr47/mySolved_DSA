#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("!\n");
    int arr[10];
    int i,j,n;
    int sum=0;
    scanf("%d",&n);
    arr[n];
    int p=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

     for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
        if(sum==0)
        {
            p=i;
        }

    }
    printf("%d",p+1);
    if(p==0)
    {
        printf("-1");
    }
    return 0;
}
