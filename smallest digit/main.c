#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int ele[10];
    int n,r;
    int s,e=0;
    printf("enter a number");
    scanf("%d",&n);

    for(;n!=0;n=n/10)
    {
        r=n%10;

        ele[e++]=r;
    }
    s=ele[0];
    for(i=0;i<e;i++)
    {
        if(s>ele[i])
            s=ele[i];
    }
    printf("%d",s);
    return 0;

}
