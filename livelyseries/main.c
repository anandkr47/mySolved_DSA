#include <stdio.h>
#include <stdlib.h>
#define max 100
int main()
{
    int n,r,j,k;
    int count=0;
    int arr2[max];
    printf("\n");
    scanf("%d",&n);
    int t=n;
    int arr[max];
    int i=0;
    while(t!=0)
    {
        r=t%10;
        arr[i]=r;
        i++;
        t=t/10;

    }
    for(j=0;j<i;j++)
    {


        for(k=0;k<i;k++)
        {
            if(arr[j]==arr[k])
            {
              count++;
            }
        }
        arr2[j]=count;
        count=0;
        }

        int b=0;
        for(j=0;j<i;j++)
        {
            if(arr2[j]!=arr2[0])
            {
                b++;
            }
        }
        if(b==0)
        {
            printf("1");

        }
        else
        {
            printf("0");
        }
      //  printf("%d",arr2[0]);
    return 0;
}
