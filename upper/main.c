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
    char dup[100];
    char string2[100];
    strcpy(string2,string);
    int count;

    int p=0;
    char ch;
    int len=strlen(string);
    for(i=0;i<len;i++)
    {
        count=1;
        for(j=i+1;j<len;j++)
        {
            if(string[i]==string[j]&&string[i]!=' ')
            {
                count++;
                string[j]='0';
            }

        }
        if(count>1&& string[i]!='0')
            dup[p++]=string[i];
    }
    for(i=0;i<p;i++)
    {
        for(j=0;j<len;j++)
        {
            if(dup[i]==string2[j])
            {
               string2[j]=toupper(string2[j]);


            }
        }
    }
    puts(string2);

    return 0;
}
