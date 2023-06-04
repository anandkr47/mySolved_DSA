#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("enter sentencec!\n");
    int i,j;
    int arr[]={1,2,2,2,3,4,4,5};
    for(i=0;i<8;i++)
    {
        for(j=i+1;j<8;j++)
        {
            if(arr[i]!=arr[j]&&i!=j)
            {
                printf("%d",arr[j]);
            }
        }
    }
    return 0;
}
