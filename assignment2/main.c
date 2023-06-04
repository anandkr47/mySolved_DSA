#include <stdio.h>
#include <stdlib.h>

    int main()
    {
        int n;
		printf("enter the size of the array\n");
        scanf("%d",&n);
        int i,j;
		printf("enter the array elements\n");
        int arr[n];
        for(i=0;i<n;i++)
		{

		    	scanf("%d",&arr[i]);

        }
        printf("\nbefore sorting the array\n");
         for(i=0;i<n;i++)
				{

				    printf("%d\t",arr[i]);
        }

        printf("\n");
		int temp,temp2;
		 for(i=0;i<n;i++)
				{
					for(j=i+1;j<n;j++)
					{
				    	if(i%2==0 )
				    	{

							if(arr[i]<arr[j])
							{
								temp=arr[i];
								arr[i]=arr[j];
								arr[j]=temp;
							}

						}

					}
		        }
		        for(i=0;i<n;i++)
				{
					for(j=i+1;j<n;j++)
						{
							if(i%2!=0 )
							{

								if(arr[i]>arr[j])
								{
									temp2=arr[i];
										arr[i]=arr[j];
										arr[j]=temp2;
									}

								}

						}
		        }
		    printf("\nafter arranging the elements alternatively\n");
		    for(i=0;i<n;i++)
		    {
				printf("%d\t",arr[i]);
			}
			printf("\n");

    }

