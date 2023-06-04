#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int i,n;
    printf("enter the no of electios\n");
    scanf("%d",&n);
    char name[n][10];
    int year[n];
    for(i=0;i<n;++i)
    {
        printf("\nenter the name of parties\n");
        scanf("%s",&name[i]);
        printf("\nenter the year\n");
        scanf("%d",&year[i]);
    }
    printf("\nbefore sorting\n");
    for(i=0;i<n;++i)
    {
        printf("%s - %d",name[i],year[i]);
    }
    char temp[10];
    int yr,j;
    for(i=0;i<n;++i)
    {
        for(j=i+1;j<n;++j)
        {
            if(year[i]>year[j]){

            yr=year[i];
            strcpy(temp,name[i]);
            year[i]=year[j];
            strcpy(name[i],name[j]);
            year[j]=yr;
            strcpy(name[j],temp);
            }

        }
    }
    int a[n];
    int c=0;
    printf("\nafter sorting\n");
    for(i=0;i<n;++i)
    {
        printf("%s - %d\n",name[i],year[i]);
    }
      for(i=0;i<n;++i)
    {

        for(j=i+1;j<n;++j)
        {
        if(strcmp(name[i],name[j])==0 && i!=j)
        {
             c++;
        }

        }
        if(c>0){
         printf("%d\n",c);
         a[i]=c;
        }
        c=0;
    }
    //printf("%d",a[0]);
    return 0;
}
