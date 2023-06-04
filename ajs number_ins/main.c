#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n");
    int n,p,c,j;
    int a=0;
    scanf("%d",&n);
    int arr[100];
    int arr2[5];
    int t,r,k=0;
    int sum=0;
    t=n;
    int rev=0;
    int i;
    while(t!=0)
    {
        r=t%10;
        arr[k++]=r;
        rev=rev*10+r;
        t/=10;
    }
    for(i=k-1;i>k-3;i--)
    {
        sum=sum+arr[i];
    }
    p=sum;
    c=0;
       while(p!=0)
        {
            r=p%10;
            arr2[c++]=r;
            p=p/10;

        }
            for(j=0;j<c;j++){
                for(i=k-1;i>=0;i--)
                {
                   if(arr2[j]==arr[i])
                   {
                        a++;
                   }
                }
            }



    if(sum>10){

      if(a==2)
      {
          printf("1\n");
      }
      else
      {
          printf("0");
      }
    }
    else if(sum<10)
    {
         if(a==1)
      {
          printf("1\n");
      }
      else
      {
          printf("0");
      }

    }
    return 0;
}
