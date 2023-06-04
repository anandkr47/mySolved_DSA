/* Implementation of double Linked list*/
#include<stdio.h>
#include<stdlib.h>
struct node
{
struct node*prev;
int data;
struct node*next;
}*start=NULL;

void create()
{
struct node*temp,*p;
temp=(struct node*)malloc(sizeof(struct node));
printf("\nEnter the data");
scanf("%d",&temp->data);
temp->next=NULL;
if(start==NULL)
{
start=temp;
start->prev=NULL;
}
else{
p=start;
while(p->next!=NULL)
p=p->next;
p->next=temp;
temp->prev=p;
}

}
void insertatbegin(struct node*newnode)
{
if(start==NULL)
{
newnode->next=NULL;
start=newnode;
}
else{
start->prev=newnode;
newnode->next=start;
start=newnode;
}
}
void insertafter(struct node*newnode,int pos)
{
struct node *p;
int i;
p=start;
for(i=1;i<pos;i++)
{
if(p==NULL)
{
printf("\nThe desired position is not there.");
return;
}
p=p->next;
}
newnode->prev=p;
newnode->next=p->next;
p->next=newnode;
newnode->next->prev=newnode;
}
void insertatend(struct node*newnode)
{
struct node*p;
if(start==NULL)
{
newnode->prev=NULL;
start=newnode;
}
else{
p=start;
while(p->next!=NULL)
p=p->next;
p->next=newnode;
newnode->prev=p;
}

}
// Traversal operation
void display()
{
struct node*p;
if(start==NULL)
{
printf("\nThe list is empty.");
return;
}
else{
p=start;
printf("\nThe nodes are ");
while(p)
{
printf("%d ",p->data);
p=p->next;
}
}
}
int countNode()
{
int cnt=0;
struct node*p;
p=start;
while(p)
{
cnt++;
p=p->next;
}
return cnt;
}
void delete1(int d)
{
struct node*temp,*p;
if(start==NULL)
{
printf("\nThe list is empty.");
return;
}
if(start->data==d&&start->next==NULL)
{
temp=start;
start=NULL;
free(temp);
return;
}
else if(start->data==d)
{
temp=start;
start=start->next;
start->prev=NULL;
free(temp);
}
else{
p=start;
while(p->next->next!=NULL)
{
if(p->next->data==d)
{
temp=p->next;
p->next=temp->next;
temp->next->prev=p;
free(temp);
return;

 }
p=p->next;
}
}
if(p->next->data==d)
{
temp=p->next;
p->next=NULL;
free(temp);
return;
}
printf("\nThe %d is not present in the linked list",d);
}
int main()
{
int choice,pos,d;
struct node *newnode;
char ch='y';
do{
printf("\n1 for create a node ");
printf("\n2 for insert at beginning ");
printf("\n3 for insert after a position ");
printf("\n4 for insert at end");
printf("\n5 for display");
printf("\n6 for counting nodes ");
printf("\n7 for delete a node");
printf("\nEnter your choice ");
scanf("%d",&choice);
switch(choice)
{
case 1:
create();
break;
case 2:
newnode=(struct node*)malloc(sizeof(struct node));
printf("\nEnter the data");
scanf("%d",&newnode->data);
newnode->prev=NULL;
insertatbegin(newnode);
break;
case 3:
newnode=(struct node*)malloc(sizeof(struct node));
printf("\nEnter the data");
scanf("%d",&newnode->data);
printf("\nEnter the position ");
scanf("%d",&pos);
insertafter(newnode,pos);
break;
case 4:
newnode=(struct node*)malloc(sizeof(struct node));
printf("\nEnter the data");
scanf("%d",&newnode->data);
newnode->next=NULL;
insertatend(newnode);
break;
case 5:
display();
break;
case 6:
printf("\nThe number of nodes =%d",countNode());
break;
case 7:
printf("\nEnter the data to be delete");
scanf("%d",&d);
delete1(d);
break;
default:
printf("\nYou have entered a wrong choice ");
}
printf("\nDo you want to continue[y/n] ");
fflush(stdin);
scanf("%c",&ch);
}while(ch=='Y'||ch=='y');
return 0;
}
