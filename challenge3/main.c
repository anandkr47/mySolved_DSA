#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n");
    int n,s,i;
    int p;
    int k;
    scanf("%d",&n);
    k=n-1;
    int arr[k];
    int ar[10];
    for(i=0;i<k;i++)
    {
        scanf("%d",&arr[i]);
    }

    s=arr[0];
    for(i=1;i<k;i++)
    {
        if(s<arr[i])
        {

            s=arr[i];
        }
    }

    p=s-1;
    for(i=0;i<k;i++)
    {
        if(p==ar[i])
        {
            p--;
        }
    }
    printf("%d\n",p);
    return 0;
}
