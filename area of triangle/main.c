#include <stdio.h>
#include <stdlib.h>

int main()
{
    float base;
    float height;
    printf("enter the base of triangle\n");
    scanf("%f",&base);
    printf("enter the height of triangle\n");
    scanf("%f",&height);
    float area= (base*height)/2;
    printf("\n the area of triangle is %f\n",area );
    return 0;

}
