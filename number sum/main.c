#include <stdio.h>
#include <stdlib.h>
// print the smallest digit of a number
// eg=41592=smallest digit =1
int main()
{
    int n;
    printf("enter a number!\n");
    scanf("%d",&n);
    int arr[10];
    int c=0;
    int small;
    int i,remender;
    int sum=0;
    while(n!=0)
    { remender=n%10;
      arr[c]=remender;
      c++;
      n=n/10;
    }
// find the smallest digit in arr[i]
    small=arr[0];
    for(i=1;i<c;i++)
    {
        if(small>arr[i])
        {
            small=arr[i];
        }

    }
    printf("%d",small);
    return 0;
}
