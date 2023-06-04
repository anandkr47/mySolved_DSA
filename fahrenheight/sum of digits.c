#include <stdio.h>


int main()
{
    int a;
    int sum;
    printf("enter the five digit number:\n");
    scanf("%d",&a);
    int last_number= a%10;
    int second_last_number =(a/10)%10;
    sum=last_number + second_last_number;
    printf("the sum of the second last digit is:%d\n",sum);

    return 0;
}
