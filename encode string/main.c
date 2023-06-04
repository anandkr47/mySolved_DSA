#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    printf("enter a string\n");
    char s[10];
    char d[10];
    scanf("%[^\n]s",s);
    int i;
    int len =strlen(s);
    for(i=0;i<len;i++)
    {
        d[i]=3+(int)s[i];
    }
    printf("%s",d);
    return 0;
}
