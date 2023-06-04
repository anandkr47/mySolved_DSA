#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    int n=10,p=5;
    int count=0;
    int arr[n];
    int arr2[p];
    printf("enter elements");
    for(i=0;i<n;i++){
            scanf("%d",&arr[i]);
    }
     printf("check enter 5 numbers");
    for(i=0;i<p;i++){
            scanf("%d",&arr2[i]);
    }
     for(i=0;i<p;i++)
    {
        for(j=0;j<n;j++){
            if(arr2[i]==arr[j])
            {
               count+=1;
            }
        }
         if(count>0)
            printf("%d",count);
         else
            printf("Not Present ");

            count=0;
    }

}


