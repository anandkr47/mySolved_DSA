#include <stdio.h>
#include <stdlib.h>


/** \brief

 */
int main()
{
    int i;

    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int arr2[]={1,1,3,4,2,4,17,18,19,20};
    int greatest=arr[0];
    int greatest2=arr2[0];
   for (i=0;i<10;i++)
   {
        if(greatest<arr[i])
        {
            greatest=arr[i];
        }
         if(greatest2<arr2[i])
        {
            greatest2=arr2[i];
        }
   }
   printf("first array largest number = %d",greatest);
   printf("first array largest number = %d",greatest2);
}
