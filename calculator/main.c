#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    printf("\nenter your choice + - * / %% for calculating value :- ");
    scanf("%c",&ch);
    int a,b;
    printf("\nenter first number: ");
    scanf("%d",&a);
    printf("\nenter second number: ");
    scanf("%d",&b);
    switch(ch){
        case( '+'):
            printf(" %d + %d = : %d",a,b,a+b);
            break;
        case( '-'):
            printf(" %d - %d = : %d",a,b,a-b);
            break;
        case( '*'):
            printf(" %d * %d = : %d",a,b,a*b);
            break;
        case( '/'):
            if(b==0)
                printf("\ndivision not possible\n");
            else
                printf(" %d / %d = : %d",a,b,a/b);
            break;
        case( '%'):
            if(b==0)
                printf("\nremainder not possible\n");
            else
                printf(" %d %% %d = : %d",a,b,a%b);
            break;
        default:
            printf("\ninvalid input\nenter + - * / %% for calculations\n");


    }
    return 0;
}
