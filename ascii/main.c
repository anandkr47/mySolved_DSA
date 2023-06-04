#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    printf("enter a string\n");
    char s[10];
    gets(s);
    int sum=0;
    int len=strlen(s);
    for(int i=0;i<len;i++)
    {
        sum=sum+s[i];
    }
    printf("%d",sum);
    return 0;
}
