/*
 * C Program to Identify whether the String is Palindrome or not using Stack
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 50

int top = -1, front = 0;
int stack[MAX];
void push(char);
void pop();

void main()
{
    int i, choice;
    char s[MAX], b;

            //printf("Enter the String\n");
            scanf("%s", s);
            for (i = 0;s[i] != '\0';i++)
            {
                b = s[i];
                push(b);
            }
            for (i = 0;i < (strlen(s) / 2);i++)
            {
                if (stack[top] == stack[front])
                {
                    pop();
                    front++;
                }
                else
                {
                    printf("No");
                    break;
                }
            }
            if ((strlen(s) / 2)  ==  front)
                printf("Yes");
            front  =  0;
            top  =  -1;



}

/* to push a character into stack */
void push(char a)
{
    top++;
    stack[top]  =  a;
}

/* to delete an element in stack */
void pop()
{
    top--;
}
