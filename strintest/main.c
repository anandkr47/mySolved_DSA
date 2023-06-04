#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char str1[10][10];
    char str2[10];
    int i;
    printf("enter a string to search!\n");
    gets(str2);
    printf("enter 10 words\n");
    for(i=0;i<10;i++)
    {
        scanf("%s",str1[i]);
    }
    /**
     printf("yor words ar!\n");
     for(i=0;i<10;i++)
    {
        printf("%s\n",str1[i]);
    }
    */
    for(i=0;i<10;i++)
    {
        if(strcmp(str2,str1[i])==0)
        {
            printf("value found at %d",i);
        }
    }
    return 0;
}
