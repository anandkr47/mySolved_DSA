#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    printf("enter a string\n");
    char str[10];
    gets(str);
    int i,open1=0,open2=0,open3;
    int len=strlen(str);
    for(i=0;i<len;i++)
    {
        if(str[i]=='[')
        {
            open1++;
        }
        if(str[i]==']')
        {
            open1--;
        }
         if(str[i]=='(')
        {
            open2++;
        }
        if(str[i]==')')
        {
            open2--;
        }
         if(str[i]=='{')
        {
            open3++;
        }
        if(str[i]=='}')
        {
            open3--;
        }
    }
    if(open1==0&&open2==0&&open3==0)
        printf("yes");
    else
        printf("no");
    return 0;
}
