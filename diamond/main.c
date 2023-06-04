#include <stdio.h>
#include <stdlib.h>

int main()
{
    int l,i,j,k;
    printf("enter the no of labels");
    scanf("%d",&l);
    for(i=1;i<=l;i++){
        for(j=l;j>i;j--){
            printf(" ");
        }
        for(k=1;k<=i;k++){
                printf("* ");
        }
        printf("\n");
    }
    int a,b,c;
    for(a=1;a<=l;a++){
        for(b=1;b<=a;b++){
            printf(" ");
        }
        for(c=l;c>a;c--){
                printf("* ");
        }
        printf("\n");
    }

    return 0;
}
