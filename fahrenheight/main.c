#include <stdio.h>
#include <stdlib.h>

int main()
{
    float fahrenheit;
    float celcius;
    printf("enter the temp in fahrenheit number:\n");
    scanf("%f",&fahrenheit);
    celcius=(fahrenheit-32)*5/9;
    printf("%f degree of fahrenheit is equal to :%f degree celcius",fahrenheit,celcius);
    return 0;
}
