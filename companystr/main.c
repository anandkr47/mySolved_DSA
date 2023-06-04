#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    printf("enter the numbers of EMPLOYS!\n");
    int n,i,j;
    int p=1;
    int count=0;
    scanf("%d",&n);
    int names[n][10];
    printf("enter %d empolys name ");
    for(i=0;i<n;i++)
    {
        scanf("%s",names[i]);
    }
    for(i=0;i<n;i++)
    {
        count=0;
        for(j=i+1;j<n;j++)
        {
            if(strcmp(names[i],names[j])==0&&i!=j)
            {
                count++;
            }
             if(count>0)
            {
                printf("%s %d",names[i],count);
            }

        }
        if(count>1)
            {
                while(p<count){
                printf("%s %d",names[j],p);
                p++;
                }
            }

        if(count==0)
        {
            printf("verified");
        }
    }

    return 0;
}
