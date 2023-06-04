#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main()
{
    int i,j;
    printf("enter string1\n");
    char string[100];
    gets(string);
    printf("enter string2\n");
    char string2[100];
    gets(string2);
    char dup[100];

    int count;

    int p=0;
    char ch;
    int len1=strlen(string);
    int len2=strlen(string2);
    for(i=0;i<len1;i++)
    {
        count=1;
        for(j=0;j<len2;j++)
        {
            if(tolower(string[i])==string2[j])
            {
                count++;
                string[i]=toupper(string[i]);
                string2[j]=toupper(string2[j]);

            }

        }
        if(count>1&& string[i]!='0')
            dup[p++]=string[i];
    }

    printf("%s %s",string,string2);

    return 0;
}
