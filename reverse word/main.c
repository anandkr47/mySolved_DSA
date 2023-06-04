    #include <stdio.h>
    #include <string.h>
    #include <ctype.h>
    #include<string.h>
    int main()
    {
        char string[100];
        scanf("%[^\n]s",string);
        char words[100][100];
        int i, j , k=0, len,x;


        //Split the string into words such that each row of array words represents a word
        for(i=0; string[i]!='\0'; i++){

            //Here, i represents row and j represents column of two-dimensional array words
            if(string[i] == ' ' || string[i] == '\0'){
                //Converts the string into lowercase and add it to array words
                words[k][j] = '\0';
                 //Increment row count to store new word
                k++;
                //Set column count to 0
                j = 0;
            }
            else{

                words[k][j] =(string[i]);
                j++;

            }
        }

        for(i=0;i<k;i++)
        {
            len=strlen(words[i]);
            printf("%s",words[i][0]);
            for(int j=len-2;j>=1;j--)

            {
                printf("%s",words[i][j]);
            }
            printf("%s",words[i][len-1]);

        }

        return 0;
    }
