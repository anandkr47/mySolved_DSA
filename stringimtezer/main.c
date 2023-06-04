#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    printf("\n");
    char str[10];
    gets(str);
    char *ptr;
    int i=0;
    long sum=0;
        while(str[i]!='\0')
        {
           if(str[i]>='0'&&str[i]<='9')
            {
                ptr=str[i];
                sum+=((int)ptr-48)
            }
            i++;
        }

    printf("%d",sum);
    return 0;
}
