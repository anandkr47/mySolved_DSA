#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,p,i,j;
    printf("Enter the size of the 1st array\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array elements of the 1st array\n");
    for(i=0;i<n;i++){
            scanf("%d",&arr[i]);
    }
    printf("enter the size of the second array");
    scanf("%d",&p);
    int arr2[p];
     printf("Enter the array elements of the 2st array\n");
    for(i=0;i<p;i++){
            scanf("%d",&arr2[i]);
    }
    int c=n+p;
    int k=n;
    int arr3[c];
    for(i=0;i<n;i++)
    {
        arr3[i]=arr[i];
    }
     for(i=0;i<p;i++)
    {
        arr3[k]=arr2[i];
        k++;
    }

    int temp;
     for(i=0;i<c;i++)
				{
					for(j=i+1;j<c;j++)
						{


								if(arr3[i]<arr3[j])
								{
									temp=arr3[i];
										arr3[i]=arr3[j];
										arr3[j]=temp;
									}

						}
		        }
		         for(i=0;i<c;i++)
                    {
                        printf("%d\t",arr3[i]);
                    }
    return 0;
}
