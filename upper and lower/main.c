#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    printf("enter any character");
    scanf("%c",&ch);
    if(ch>= 'A' && ch<= 'Z')
        printf("%c is upper case",ch);
    if(ch>= 'a' && ch<= 'z')
        printf("%c is lower case",ch);

    return 0;
}
