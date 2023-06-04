#include <stdio.h>
#include <stdlib.h>

int main()
{
    int salary;
    int survice;
    int bonus;
    printf("enter your salary \n");
    scanf("%d",&salary);
    printf("enter your year of service \n");
    scanf("%d",&survice);
    bonus=salary*5/100;
    int salarybonus= salary + bonus;
    if(survice>5)
        printf("your salary is %d after getting 5 persent bonus your salary is : %d\n",salary,salarybonus);
    else
        printf("you are not eligible for bonus your salary is %d\n",salary);
    return 0;
}
