#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *xstrcpy(char *s1[],char *s2[]){
    strcpy(s2,s1);
    return s2;
}
int main()
{
    char S[100];
    printf("Enter a statement!\n");
    gets(S);
    char p[100];
    char *p2= xstrcpy(S,p);
    printf("the coppied value is %s",p2);
    return 0;
}
