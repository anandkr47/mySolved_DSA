#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    printf("Enter the number of teams\n");
    scanf("%d",&n);
    int t[n];
    printf("Enter the number of goals scored\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&t[i]);
    }
    int neatg=0;
    for(i=n-1;i>=n-3;i--)
    {
        neatg+=t[i];
    }
    printf("%d",neatg);
     printf("net goal rate of the team is\n");
      for(i=0;i<n;i++)
    {
        printf("%d \t",t[i]-neatg);
    }
    return 0;
}
