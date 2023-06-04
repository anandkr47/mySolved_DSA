#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void lenth(char ch[]){
    int *l;
    l=strlen(ch);
     printf(" the length is %d ",l);
}
int main()
{
    char S[100];
    printf("Enter a statement!\n");
    gets(S);
    lenth(S);
    return 0;
}
