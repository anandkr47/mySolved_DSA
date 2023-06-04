#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int i,n;
    printf("enter the no of employs\n");
    scanf("%d",&n);
    char name[n][10];
    int salary[n];
    for(i=0;i<n;++i)
    {
        printf("\nenter the names of employs\n");
        scanf("%s",&name[i]);
        printf("\nenter the salary\n");
        scanf("%d",&salary[i]);
    }
    printf("\nbefore sorting\n");
    for(i=0;i<n;++i)
    {
        printf("%s - %d",name[i],salary[i]);
    }
    char temp[10];
    int sal,j;
    for(i=0;i<n;++i)
    {
        for(j=i+1;j<n;++j)
        {
            if(salary[i]>salary[j]){

            sal=salary[i];
            strcpy(temp,name[i]);
            salary[i]=salary[j];
            strcpy(name[i],name[j]);
            salary[j]=sal;
            strcpy(name[j],temp);
            }

        }
    }
    printf("\nafter sorting\n");
    for(i=0;i<n;++i)
    {
        printf("%s - %d\n",name[i],salary[i]);
    }
    return 0;
}
