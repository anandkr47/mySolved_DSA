#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    int sum=0;
    printf("enter how many numbers you want to enter\n");
    scanf("%d",&n);
    int *p=(int *)malloc(n*sizeof(int));
    printf("\nenter %d numbers\n",n);
    for(i=0;i<n;i++){
        scanf("%d",(p+i));
    }
    for(i=0;i<n;i++){
        sum+= *(p+i);
    }
    printf("\nthe sum of the  %d numbers is %d\n",n,sum);
    free(p);
        return 0;
}
