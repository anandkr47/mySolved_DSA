#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,temp;
    printf("\n");
    int arr1[5]={12,22,35,40,5};
    int arr2[3]={11,12,13};
    int s=5+3;
    int arr[8];
    for(i=0;i<5;i++)
    {
        arr[i]=arr1[i];
    }
    int k=5;
    for(i=0;i<3;i++)
    {
        arr[k]=arr2[i];
        k++;
    }
    for(i=0;i<s;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
     for(i=0;i<s;i++)
    {
        for(j=i+1;j<s;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }

        }
        printf("%d\t",arr[i]);

        }

    return 0;
}
