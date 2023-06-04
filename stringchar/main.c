#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    printf("enter a string!\n");
    char str[20];
    scanf("%[^\n]s",str);
    char word[100][100];
    char article[][5]={"a",
                        "A",
                        "an",
                        "An",
                        "the",
                        "The"
                        };
    int len2=strlen(article);
    int i,j=0;
    int k=0;
    int len;
    int c=0;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]!=' '&&str[i]!='\0'){
            word[k][j++]=str[i];
        }
        else{
            word[k][j]='\n';
            k++;
            j=0;
         }
    }
    len=strlen(word);
    for(i=0;i<len2;i++)
    {   c=0;
        for(j=0;j<len;j++)
        {
           if(strcmp(article[i],word[j])==0)
           {
               c++;
           }
           if(c>0&&word[j+1]!='\0')
           {
               printf("%s",word[j]);
           }
        }
         printf("%d\n",c);
    }
     for(i=0;i<6;i++)
    {
        printf("%s ",article[i]);
    }
    printf("%d\n",c);
    return 0;
}
