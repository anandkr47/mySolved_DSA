#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("enter the  percentage \n");
    scanf("%d",&a);
    if(a>=90)
        printf("you got O grade");
    else if(a>=80 && a<90)
        printf("you got E grade");
    else if(a>=70 && a<80)
        printf("you got A grade");
    else if(a>=60 && a<70)
        printf("you got B grade");
    else
        printf("you got F grade");
    printf("\n");
    return 0;
}
