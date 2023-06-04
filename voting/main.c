#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("enter your age\n");
    scanf("%d",&num);
     if(num>=18)
        printf("you are eligible for voting");
     else
        printf("you are not eligible for voting");
    return 0;
}
