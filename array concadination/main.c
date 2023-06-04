#include <stdio.h>
#include <stdlib.h>
//PROGRAM TO FIND THE TRIPLET
int main()
{
    int count=0;
    int b[]={1,1,1,4,4,6,4,2,3,5};
    int n=10;
    int arr[10];
    int k=0;
    for(int i=0;i<10;i++)
    {
        k=b[i];
        arr[k]++;
        printf("%d",arr[i]);
    }
     for(int i=0;i<10;i++)
    {
        if(arr[i]==3)
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
