#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numch,per,numatd;
    printf("enter the number of class held \n");
    scanf("%d",&numch);
    printf("enter the no of class attended \n");
    scanf("%d",&numatd);
    per=100*numatd/numch;
    if(per>=75)
        printf(" your persentage of attendence is %d you are alloud to sit in exam\n",per);
    else
        printf("your persentage of attendence is %d you are not alloud to sit in exam\n",per);
    char ch;
    printf("\nfor any medicical issues for absent press 'y' if not then press 'n'\n" );
    scanf("%s",&ch);
    switch(ch)
    {
        case 'y':
            printf("write an absent appliction to the principle with your medical recipt Then You Can Sit On The Exam\n");
            break;
        case 'n':
            printf("you cant sit in exam talk to principle\n");
            break;
        default:
            printf("you have entered wrong value ");
    }
    return 0;
}

