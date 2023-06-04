#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("USER INPUT R->ROCK P-> PAPER S->SECISSOR\n");
    char u1,u2;
    printf("enter user 1 input");
    scanf("%s",&u1);
    printf("\nenter user 2 input\n");
    scanf("%s",&u2);
    if(u1=="R" )
    {
        if(u2=='P')
        {
        printf("\nuser 2 wins\n");
        }
       else if(u2=='S')
        {
        printf("\nuser 1 wins\n");
        }
       else if(u2=='R')
        {
        printf("\nDraw\n");
        printf("\\n");
        }
    }

      if(u1=='P' )
    {
        if(u2=='P')
        {
        printf("\nDRAW\n");
        }
       else if(u2=='S')
        {
        printf("\nuser 2 wins\n");
        }
       else if(u2=='R')
        {
        printf("\nUSER 1 WINS\n");
        printf("\\n");
        }
    }
      if(u1=='R' )
    {
        if(u2=='P')
        {
        printf("\nuser 1 wins\n");
        }
        else if(u2=='S')
        {
        printf("\nuser 1 wins\n");
        }
       else if(u2=='R')
        {
        printf("\nDraw\n");
        printf("\\n");
        }
    }
    else
    {
        printf("WRONG INPUT \n USER INPUT R->ROCK P-> PAPER S->SECISSOR\n");
    }
    return 0;
}
