#include <stdio.h>
#include <stdlib.h>

    int main()
    {
        int n;
		printf("");
        scanf("%d",&n);
        int i,j;
		printf("");
        int arr[n];
        for(i=0;i<n;i++)
		{

		    	scanf("%d",&arr[i]);

        }


        printf("\n");
		int temp,temp2;
		 for(i=0;i<n;i++)
				{
					for(j=i+1;j<n;j++)
					{
				    	if(i%2==0&&j%2==0 )
				    	{

							if(arr[i]>arr[j])
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
							if(i%2!=0 &&j%2!=0)
							{

								if(arr[i]<arr[j])
								{
									temp2=arr[i];
										arr[i]=arr[j];
										arr[j]=temp2;
									}

								}

						}
		        }
		    printf("\n\n");
		    for(i=0;i<n;i++)
		    {
				printf("%d ",arr[i]);
			}
			printf("\n");

    }

