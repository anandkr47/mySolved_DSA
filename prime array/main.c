#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j;
    printf("enter the nth number\n");
    scanf("%d",&n);
    int hyp[100];
    int c=0;
    int k=0;
    for (i=2;i<=100;i++)
    {
        for(j=2;j<=i/2;++j)
        {
            if(i%j==0)
            {
                c++;
                break;
            }
        }

         if(c==0)
            {
                printf("%d\n",i);
                hyp[k]=i;
                k++;
            }
            c=0;
    }
    printf("%d",hyp[n-1]);
    return 0;
}
