#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char A[10];
    char B[10];
    printf("enter a word\n");
    gets(A);
    puts(A);
    strcpy(B,A);
    strrev(A);
    if(strcmp(A,B)==0)
        printf("yes it is palindrome");
    else
        printf("no not palindrome");

    return 0;
}
