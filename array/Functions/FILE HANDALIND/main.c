#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *ptr;
    char str1[10];
    char str2[10];
    ptr = fopen("FILE1.txt","W+");
    printf("enter your first name");
    scanf( "%s",&str1);
    printf("enter your second name");
    scanf( "%s",&str2);
    for(int i=0;i<=10;i++){
        fprintf(ptr,"hellow\n");
        fprintf(ptr,"my name is %s %s\n",str1,str2);
    }
    fclose(ptr);
    return 0;
}
