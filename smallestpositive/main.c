#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n");
    int n,s,i;
    int p,k=0;
    scanf("%d",&n);
    int arr[n];
    int ar[10];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]>0)
        {
            ar[k]=arr[i];
            k++;
        }
    }
    s=ar[0];
    for(i=1;i<k;i++)
    {
        if(s>ar[i])
        {

            s=ar[i];
        }
    }
    p=s+1;
    for(i=0;i<k;i++)
    {
        if(p==ar[i])
        {
            p++;
        }
    }
    printf("%d\n",p);
    return 0;
}
