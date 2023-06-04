#include <stdio.h>
#include <stdlib.h>

int main()
{
   // printf("enter the size of array and how many times you wnt to rotate it!\n");
    int n,d,i,j;
    int last,temp;
    scanf("%d %d",&n,&d);
    int arr[n];
   // printf("enter the elemets");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<d;i++)
    {
        last=arr[0];
        for(j=0;j<n;j++)
        {

            arr[j]=arr[j+1];



        }
        arr[n-1]=last;
    }
      for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}
