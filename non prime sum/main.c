#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    int c=0;
    int ele[10];
    int n,r;
    int sum=0,e=0;
    printf("enter a number");
    scanf("%d",&n);
    while(n!=0)
    {
        //12345 r=5
        r=n%10;

        ele[e]=r;
        e++;   //0 1 2 3 4
        n=n/10;
    }

    for(i=0;i<e;i++)
    {
        if(ele[i]!=2&&ele[i]!=3&&ele[i]!=5&&ele[i]!=7)
        {
            sum+=ele[i];
        }
    }
     printf("%d",sum);
    return 0;
}
