#include <stdio.h>
#define max 100
int main()
{
	int arr[max];
	int i, x, pos;
	int size;
    printf("enter the size of array");
	scanf("%d",&size);
	if(size>max)
	    printf("over flow\n");
    if(size<max)
     {
        arr[size];

        for (i = 0; i < size; i++)
            scanf("%d",&arr[i]);


        for (i = 0; i < size; i++)
            printf("%d ", arr[i]);
        printf("\n");

	    printf("element to be inserted");
        scanf("%d",&x);

        printf(" position at which element is to be inserted");

        scanf("%d",&pos);


        if(pos>max)
            printf("over flow\n");
        else{



            for (i = size-1; i >=pos-1; i--){
                arr[i+1] = arr[i];
            }

            arr[pos - 1] = x;
            size++;

            for (i = 0; i < size; i++)
                printf("%d ", arr[i]);
            printf("\n");
        }
     }
	return 0;
}
