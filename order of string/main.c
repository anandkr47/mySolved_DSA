#include <stdio.h>
#include <ctype.h>
#include<string.h>
int main()
{
    // we have to check whether the given sentence can be interchanged or not
    // the condition to interchange is first char of first word must be equal to last char of last word
    //eg--Loan avail
    // and the last char of first word is equal to the first char of first word
    // eg-- avail loan
    //if condition true satisfies then print 1
        char string[100];
        scanf("%[^\n]s",string);
        char words[100][100];
        int i, j=0, k=0;
        int len1,len2;
        int out=0;

        for(i=0; i<=strlen(string); i++){

            if(string[i] == ' ' || string[i] == '\0'){

                words[k][j] = '\0';

                k++;

                j = 0;
            }
            else{

                words[k][j] =string[i];
                j++;

            }
        }

        len1=strlen(words[0]);
        len2=strlen(words[1]);

        if(words[0][0]==words[1][len2-1]||words[0][len1-1]==words[1][0])
        {
            out=1;
        }

        printf("%d",out);

        return 0;
    }
