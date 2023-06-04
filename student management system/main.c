#include<stdlib.h>
#include<string.h>
#include<stdio.h>
struct Student
{
    int rollnumber;
    char fname[100];
    char lname[100];
    char course[100];
    float cgpa;
    struct Student *next;

}* head;
void insert(int rollnumber, char* fname,char* lname, char* course, float cgpa)
{

    struct Student * student = (struct Student *) malloc(sizeof(struct Student));
    student->rollnumber = rollnumber;
    strcpy(student->fname, fname);
    strcpy(student->lname, lname);
    strcpy(student->course, course);
    student->cgpa = cgpa;
    student->next = NULL;

    if(head==NULL){
        head = student;
    }
    else{
        student->next = head;
        head = student;
    }

}
void search(int rollnumber)
{
    struct Student * temp = head;
    while(temp!=NULL){
        if(temp->rollnumber==rollnumber){
            printf("Name: %s %s\n", temp->fname,temp->lname);
            printf("Roll Number: %d\n", temp->rollnumber);
            printf("course: %s\n", temp->course);
            printf("cgpa: %0.2f\n", temp->cgpa);
            return;
        }
        temp = temp->next;
    }
    printf("Student with roll number %d is not found !!!\n", rollnumber);
}
void update(int rollnumber)
{
    struct Student * temp = head;
    while(temp!=NULL){

        if(temp->rollnumber==rollnumber){
            printf("Record with roll number %d Found !!!\n", rollnumber);
            printf("Enter new name:\n ");
            printf("Enter first name: ");
            scanf("%s",temp->fname);
            printf("Enter last name: ");
            scanf("%s", temp->lname);
            printf("Enter roll number: ");
            scanf("%d", &temp->rollnumber);
            printf("Enter course registered: ");
            scanf("%s",temp->course);
            printf("Enter cgpa: ");
            scanf("%f", &temp->cgpa);
            printf("Updation Successful!!!\n");
            return;
        }
        temp = temp->next;

    }
    printf("Student with roll number %d is not found !!!\n", rollnumber);

}
void Delete(int rollnumber)
{
    struct Student * temp1 = head;
    struct Student * temp2 = head;
    while(temp1!=NULL){

        if(temp1->rollnumber==rollnumber){

            printf("Record with roll number %d Found !!!\n", rollnumber);

            if(temp1==temp2){

                head = head->next;
                free(temp1);
            }
            else{

                temp2->next = temp1->next;
                free(temp1);
            }

            printf("Record Successfully Deleted !!!\n");
            return;

        }
        temp2 = temp1;
        temp1 = temp1->next;

    }
    printf("Student with roll number %d is not found !!!\n", rollnumber);

}

void display()
{
    struct Student * temp = head;
    if(temp==NULL)
    {
        printf("no student regestered \nregester student first");
    }
    while(temp!=NULL){


        printf("Name: %s %s\n", temp->fname,temp->lname);
        printf("Roll Number: %d\n", temp->rollnumber);
        printf("course registered: %s\n", temp->course);
        printf("cgpa: %0.2f\n\n", temp->cgpa);
        temp = temp->next;

    }
}
int main()
{
    //head = NULL;
    int choice;
    int rollnumber;
    char fname[100];
    char lname[100];
    char course[100];
    float cgpa;
    printf("1 to insert student details\n2 to search for student details\n3 to delete student details\n4 to update student details\n5 to display all student details\n press 0 to exit");
    do
    {
        printf("\nEnter Choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                printf("Enter first name: ");
                scanf("%s", fname);
                printf("Enter last name: ");
                scanf("%s", lname);
                printf("Enter roll number: ");
                scanf("%d", &rollnumber);
                printf("Enter course registered: ");
                scanf("%s", course);
                printf("Enter cgpa: ");
                scanf("%f", &cgpa);
                insert(rollnumber, fname,lname, course, cgpa);
                break;
             case 2:
                printf("Enter roll number to search: ");
                scanf("%d", &rollnumber);
                search(rollnumber);
                break;
            case 3:
                printf("Enter roll number to delete: ");
                scanf("%d", &rollnumber);
                Delete(rollnumber);
                break;
            case 4:
                printf("Enter roll number to update: ");
                scanf("%d", &rollnumber);
                update(rollnumber);
                break;
            case 5:
                display();
                break;
        }

    } while (choice != 0);
}
