#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum=0;
    printf("enter a word!\n");
    char string[100];
    scanf("%[^\n]s",string);
    int len=strlen(string);
    int len2;
    int a[128]={0};
    int i;
    for(i=0;i<len;i++)//aaabbbccc
    {
        a[string[i]]=1;//a[97]=1

    }

     for(i=0;i<128;i++)
    {
        sum=sum+a[i];

    }
    printf("%d",sum);
    if(sum==3)
    {
        printf(" wonder");
    }
    else
    {
        printf("-1");
    }
    return 0;
}
