#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char S[100],T[100];
    int i;
    printf("Enter a statement!\n");
    gets(S);
    int n=strlen(S);
    int j=0;
    for(i=n-1;i>=0;i--){
       T[j++]=S[i];
    }
    T[i]='\0';
    printf("\nthe array after reversing is %s\n",T);
    return 0;
}


