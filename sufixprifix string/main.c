#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("enter a string\n");
    char str[10];
    char dup[10];
    int i,j;
    int r=0,k=0,d=0;
    scanf("%[^\n]s",str);
    int len =strlen(str);
    int p;
    int start=0,end=len;
    for(i=0;i<len;i++)
    {
        for(j=i+1;j<len;j++)
        {
            if(str[i]==str[j]&&i!=j)
            {
               // no of duplicate elements
               k++;
            }

        }
    }
    printf("%d\n",k);
     p=len-1;
    for(i=0;i<k;i++)
    {
        if(str[i]==str[p--])
           {
               start=start+1;
               end=end-1;
               r++;
           }
    }
    printf("%d\n",r);
    for(i=start;i<end;i++)
    {
        dup[d]=str[i];
        d++;
    }
    dup[d]='\0';
    if(k==r){
        printf("%s",dup);
    }
    else{
        printf("minimal string is empty");
    }
    return 0;
}
