#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("enter a sentence!\n");
    char str[100];
    scanf("%[^\n]s",str);
    int len=strlen(str);
    int i,j;
    for(i=0;i<len;i++)
    {
        if(str[i]==' '&&str[i]!='\0')
        {

        }
    }
    return 0;
}
