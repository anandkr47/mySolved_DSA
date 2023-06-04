#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char S[20];
    int i,ns=0;
    printf("Enter a statement!\n");
    gets(S);
    int n=strlen(S);
    for(i=0;i<n;i++){
        if(S[i]==' ')
            ns++;
    }
    printf(" the no of word is %d ",ns+1);
    return 0;
}
