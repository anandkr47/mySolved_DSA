#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[10];
    char string[10];
    printf("enter a string\n");
    scanf("%s",&str);
    char str2[10];
    int num[10];
     int i,j,c=0;
     int d=0;
     int s=0;
     int p=1;
     for(i=0;i<strlen(str);i++)
     {
         if(str[i]!='['&&str[i]!=']')//3[B[2[AA]]]=3B2AA
         {
             str2[c]=str[i];//3B2AA
             c++;
         }
     }
     str2[c]='\0';

     for(i=0;i<c;i++)
     {
         if(isdigit(str2[i]))//we will take out the number
            num[d++]=str2[i]-48;//3 2
        else
            string[s++]=str2[i];//b aa
     }
     string[s]='\0';
     for(i=0;i<num[0];i++)//3
     {
        printf("%c",string[0]);//b
        p=1;
         for(j=0;j<num[1];j++)//2
         {
             if(string[p]!='\0'){
                    printf("%c",string[p]);

                    printf("%c",string[p++]);
             }

                //b aaaa b aaaaa b aaaa
         }

     }
    return 0;
}
