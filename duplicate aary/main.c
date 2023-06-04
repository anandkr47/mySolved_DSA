#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    int count=0;
    int numdub=0;
    int arr[]={6,5,3,1,1,1,1,2,2,1,1,1,2,2,5,5};
    printf("enter the element to check for its repitation");
    for(i=0;i<16-1;i++)
    {

        for(j=i;j<16;j++){
            if(arr[i]==arr[j])
            {
               count++;

            }

        }
         if(count>=3)
            {
                numdub++;
            }


    }

    printf("%d",numdub);
}
