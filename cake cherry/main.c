#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r,c;
    int i,j;
    int cost=0;
    printf("enter the row and column to arrange cherry\n");
    scanf("%d %d",&r,&c);
    char cherry[r][c];
    printf("enter the cherry");
    for(i=0;i<r;i++)
    {
            scanf("%s",&cherry[i]);

    }

    for(j=0;j<c;j++)
    {
            i=0;
            if(cherry[i][j]!='R')
            {
                cherry[i][j]='R';
                cost+=3;
            }

    }
    for(j=0;j<c;j++)
    {
            i=1;
            if(cherry[1][j]!='G')
            {
                cherry[1][j]='G';
                cost+=5;
            }


    }

    if(cost>0)
        printf("\n%d",cost);
    else
        printf("\nminimum cost is zero");
    return 0;
}
