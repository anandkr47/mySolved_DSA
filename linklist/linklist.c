#include<stdio.h>
#include<stdlib.h>
struct node{​
    int data;
    struct node*link;
}​*start=NULL;
void create()
{​
    struct node*newnode,*p;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter the data");
    scanf("%d",&newnode->data);
    newnode->link=NULL;
    if(start==NULL)
    {​
    start=newnode;
    }​
    else{​
    p=start;
    while(p->link!=NULL)
    p=p->link;
    p->link=newnode;
    }​

}​
void insertatbeg(struct node *newnode)
{​
    newnode->link=start;
    start=newnode;
}​
void insertatend(struct node*newnode)
{​
struct node*p;
if(start==NULL)
start=newnode;
else{​
p=start;
while(p->link!=NULL)
p=p->link;
p->link=newnode;
}​
}​
//Insert a node after a position
void insertafterapos(int pos,struct node*newnode)
{​
int i;
struct node*p;
p=start;
for(i=1;i<pos;i++)
{​
if(p->link==NULL)
{​
printf("\nThere are less number of nodes.");
return;
}​
p=p->link;
}​
newnode->link=p->link;
p->link=newnode;
}​
int count()
{​
int cnt=0;
struct node*p;
p=start;
while(p!=NULL)
{​
cnt+=1;
p=p->link;
}​
return cnt;
}​
void display()
{​
struct node *p;
if(start==NULL)
{​
printf("\nThe Linked list is empty.");
return;
}​
p=start;
printf("\nThe nodes of a linked list are ");
while(p!=NULL)
{​
printf("%d ",p->data);
p=p->link;
}​
}​
//for deleting a node
void deleteNode(int d)
{​
struct node*p,*temp;
if(start==NULL)
{​
printf("\nThe linked list is Empty.");
return;
}​
if(start->data==d&&start->link==NULL)
{​
temp=start;
start=NULL;
free(temp);
return;
}​
if(start->data==d)
{​
temp=start;
start=start->link;
free(temp);
return;
}​
else{​
p=start;
while(p->link->link!=NULL)
{​
if(p->link->data==d)
{​
temp=p->link;
p->link=temp->link;
free(temp);
return;
}​
p=p->link;
}​
if(p->link->data==d)
{​
temp=p->link;
p->link=NULL;
free(temp);
return;
}​
}​
printf("\nThe desired data is not present.");
}​
//for reverse a single linked list
void reverse()
{​
struct node *p1,*p2,*p3;
p1=start;
p2=p1->link;
p3=p2->link;
p1->link=NULL;
p2->link=p1;
while(p3!=NULL)
{​
p1=p2;
p2=p3;
p3=p3->link;
p2->link=p1;
}​
start=p2;
}​
int main()
{​
struct node*temp;
int choice,pos;
int data;
while(1)
{​
printf("\n1 for create a node ");
printf("\n2 for insert at beginning");
printf("\n3 for insert after a position");
printf("\n4 for insert a node at end.");
printf("\n5 for traversal of the linked list.");
printf("\n6 for counting no of nodes in a linked list");
printf("\n7 for deleting a node");
printf("\n8 for reverse the linked list.");
printf("\n9 for exit");
printf("\nEnter your choice..");
scanf("%d",&choice);
switch(choice)
{​
case 1:
create();
break;
case 2:
temp=(struct node*)malloc(sizeof(struct node));
printf("\nEnter the data");
scanf("%d",&temp->data);
insertatbeg(temp);
break;
case 3:
temp=(struct node*)malloc(sizeof(struct node));
printf("\nEnter the data");
scanf("%d",&temp->data);
printf("\nenter the position at where want to insert ");
scanf("%d",&pos);
insertafterapos(pos,temp);
break;
case 4:
temp=(struct node*)malloc(sizeof(struct node));
printf("\nEnter the data");
scanf("%d",&temp->data);
temp->link=NULL;
insertatend(temp);
break;
case 5:
display();
break;
case 6:
printf("\nThe number of nodes=%d",count());
break;
case 7:
printf("\nEnter the data to be delete from linked list ");
scanf("%d",&data);
deleteNode(data);
break;
case 8:
reverse();
break;
case 9:
exit(0);
default:
printf("\nYou have entered a wrong choice ");
 }​
}​
return 0;
}​


