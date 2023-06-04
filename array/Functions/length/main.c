#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char S[100];
    int i;
    printf("Enter a statement!\n");
    gets(S);
    for(i=0;S[i]!='\0';i++);
      printf(" the length is %d ",i);
    return 0;
}
