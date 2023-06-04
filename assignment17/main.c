#include<stdio.h>
#include<conio.h>
int main()
{
    int i, j, c = 0;
    int b=1;
    int p;
    for(i = 1; i <= 4; i++)
    {

        for(j = 1; j <= i; ++j)
        {
             ++c;
        }
            b=c;
         for(j = 1; j <= i; ++j)
        {
             printf("%d ",b);
             b--;

        }
            printf("\n");
    }
    p=c;
    for(i = 4; i >= 1;--i)
    {

        for(j = 1; j <= i; ++j)
        {
            printf("%d ",p);
            p--;
        }
        printf("\n");
    }
    return 0;
}
