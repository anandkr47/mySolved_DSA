#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    printf("enter a character\n");
    scanf("%c",&ch);
        switch(ch)
    {
        case'Y':
            printf("write an absent appliction to the principle with your medical recipt Then You Can Sit On The Exam\n");
            break;
        case'N':
            printf("you cant sit in exam talk to principle ");
            break;
        default:
            printf("you have entered wrong value ");
    }
    return 0;
}

