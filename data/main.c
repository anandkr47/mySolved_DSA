#include<stdio.h>
#include<stdlib.h>
struct node
{
     int data;
     struct node*link;
};
 struct node*add_beg(struct node* head , int d)
    {
     struct node *ptr = malloc(sizeof(struct node));
     ptr -> data = d;
     ptr ->link =NULL;

     ptr ->link = head;
     head =ptr;
      return head;
    }
int main()
{
    int data;
    struct node*head=malloc(sizeof(struct node*));
    head -> data = 7;
    head ->link = NULL;

    struct node*ptr = malloc(sizeof(struct node*));
    ptr-> data = 8;
    ptr->link = NULL;

    head ->link =ptr;

    data =3;
    head = add_beg(head,data);

    ptr = head;
    while(ptr != NULL)
    {
        printf("%d" , ptr->data);
        ptr = ptr->link;
    }
    return 0;
}
