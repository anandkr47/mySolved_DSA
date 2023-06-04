#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=1;
    int j=1;
    int m;
    printf("Enter a table range \n");
    scanf("%d",&m);
    printf("the table from 1 to %d is\n",m);
    while(i<=m){
        j=1;
        while(j<=10){
            printf("%d * %d = %d\n",i,j,i*j);
            j++;
        }
        i++;
    }
    return 0;
}
