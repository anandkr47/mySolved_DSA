#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char S[20];
    printf("Enter a statement!\n");
    gets(S);
    int n=strlen(S);
    if(n>10){
        printf("%c%d%c",S[0],n-2,S[n-1]);
    }
    else
        puts(S);
    return 0;
}
