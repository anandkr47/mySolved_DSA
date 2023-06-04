//circular link list.
#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node*next;
}*last=NULL;
void create()
{
struct node*newnode;
newnode=(struct node*)malloc(sizeof(struct node));
printf("\nEnter the data ");
scanf("%d",&newnode->data);
if(last==NULL)
{
last=newnode;
last->next=newnode;
}
else{
newnode->next=last->next;
last->next=newnode;
last=newnode;
}
}
void insertatbeg(struct node*newnode)
{
if(last==NULL)
{
newnode->next=newnode;
last=newnode;
}
else{
newnode->next=last->next;
last->next=newnode;
}
}
void insertafter(struct node*newnode,int pos)
{
struct node*p;
int i;
p=last->next;
for(i=1;i<pos;i++)
{
if(p==NULL)
{
printf("\nThere are less number of nodes. ");
return;
}
p=p->next;
}
newnode->next=p->next;
p->next=newnode;
}
void insertatend(struct node*newnode)
{
if(last==NULL)
{
newnode->next=newnode;
last=newnode;
}
else{
newnode->next=last->next;
last->next=newnode;
last=newnode;
}
}
// Traversal
void display()
{
struct node*p;
if(last==NULL)
{
printf("\nThe list is empty.");
return;
}
p=last->next;
printf("\nThe elements in the circular list are ");
while(p!=last)
{
printf("%d ",p->data);
p=p->next;
}
printf("%d",last->data);
}
int countNode()
{
int cnt=0;
struct node*p;
if(last!=NULL)
p=last->next;
while(p!=last)
{
cnt++;
p=p->next;
}
if(last)
cnt++;
return cnt;
}
void delete1(int d)
{
struct node*p,*temp;
if(last==NULL)
{
printf("\nThe list is empty.");
return;
}
if(last->next->data==d&&last->next==last)
{
temp=last;
last=NULL;
free(temp);
return;
}
else if(last->next->data==d)
{
temp=last->next;
last->next=temp->next;
free(temp);
return;
}
else{
p=last->next;
while(p!=last)
{
if(p->next->data==d)
{
temp=p->next;
p->next=temp->next;
free(temp);
return;
}
p=p->next;
}
}
if(last->data==d)
{
temp=last;
p->next=last->next;
last=p;
free(temp);
return;
}
printf("\nThe data is not present.");

}
int main()
{
int choice,pos,data;
struct node*newnode;
char ch='y';
do{
printf("\n1 for create node ");
printf("\n2 for insert at beginning ");
printf("\n3 for insert after a position ");
printf("\n4 for insert at end ");
printf("\n5 for display ");
printf("\n6 for Count node ");
printf("\n7 for deleting a node ");
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
insertatbeg(newnode);
break;
case 3:
newnode=(struct node*)malloc(sizeof(struct node));
printf("\nEnter the data");
scanf("%d",&newnode->data);
printf("\n enter the position at where u want to insert ");
scanf("%d",&pos);
insertafter(newnode,pos);
break;
case 4:
newnode=(struct node*)malloc(sizeof(struct node));
printf("\nEnter the data");
scanf("%d",&newnode->data);
insertatend(newnode);
break;
case 5:
display();
break;
case 6:
printf("\nThe number of node is %d",countNode());
break;
case 7:
printf("\nEnter the data to be delete ");
scanf("%d",&data);
delete1(data);
break;
default:
printf("\nYou have entered a wrong choice ");
}
printf("\nDo you want to continue [y/n]");
scanf("\n%c",&ch);
}while(ch=='y'||ch=='Y');
return 0;
}
