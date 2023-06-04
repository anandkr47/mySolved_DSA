#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void vowel(char ch[])
{
    int n=strlen(ch);
    int i, c=0;
    for(i=0;i<n;i++){
        if((ch[i] == 'a' || ch[i] == 'e' || ch[i] =='i' || ch[i] == 'o' || ch[i] =='u') || (ch[i] == 'A' || ch[i] == 'E' || ch[i] == 'I' || ch[i] == 'O' || ch[i] == 'U' )){

            c++;
        }
    }
    printf(" \n the no of vowel is %d\n",c);
}

int main()
{
    char ch[20];
    printf("\nenter a string\n");
    gets(ch);
    puts(ch);
    vowel(ch);
    return 0;
}
