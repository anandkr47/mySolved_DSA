#include <stdio.h>
#include <stdlib.h>
int size=4;
int i;
int capacity=10;
int insert(int arr[size],int ele,int pos)
{
    if(size>=capacity){
        return -1;
    }else{
        for(i=size-1;i<=pos;i++){
            arr[i]=arr[i+1];
        }
        arr[pos]=ele;
        size=size+1;
    }
    return;
}

void display(int arr[size])
{
    for(i=0;i<size;i++)
    {
        printf("%d",arr[i]);
    }
}
int main()
{
    int arr[10]={10,20,30,40};
    int ele,pos;

    int ch;
    printf("enter your choice\n");
    printf("1.insert at position");
    printf("2.delete");
    printf("3.sort");
    printf("4.display");
    switch(ch)
    {
        case(1):
             printf("enter the element you want to insert!\n");
             scanf("%d",&ele);
              printf("enter the position!\n");
              scanf("%d",&pos);
              int element_inserted=insert(arr,ele,pos);
              printf("the element inserted\n%d",element_inserted);
              break;
        case(2):
              printf("the array elements are\n");
              display(arr);
              break;
    }
    printf("enter the element you want to insert!\n");
    scanf("%d",&ele);

    return 0;
}
