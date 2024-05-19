//Structure functionalities like structure array , pointer to a structure
#include<stdio.h>
typedef struct 
{
    char name[100];
    long roll;
    char stream[100];
}Student;
//Student ar[100];  only when doing global variable else using pointer then no problem
void add_details();
void update(Student *,int);
void display(Student *,int); //accepting pointer  to structure
void main()
{
    add_details();
}
void add_details()                                     //adding the student details
{
    Student ar[100];
    int n;char c;
    printf("Enter number of students: ");
    scanf("%d",&n);
    scanf("%c",&c);
    printf("ENTER THE STUDENT DETAILS\n");
    for(int i=0;i<n;i++)
    {
        printf("Enter name of student: ");
        scanf("%[^\n]",ar[i].name);
        printf("enter roll number: ");
        scanf("%ld",&ar[i].roll);
        scanf("%c",&c);
        printf("Enter stream of student: ");
        scanf("%[^\n]",ar[i].stream);
        scanf("%c",&c);
    }
    Student *p; //Pointer to a structure 
    p=ar; //Storing address of structure array and since array so no ampersand
    char t;
    printf("Do you want to update list of Students?(Y/N): ");   //asking for updates
    scanf("%c",&t);
    if(t=='Y')
    update(p,n);
    else
    display(p,n);
}
void update(Student *p,int n)                               //taking inputs for the updates
{
    int n1;char d;
    printf("How many more details to input?: ");
    scanf("%d",&n1);
    scanf("%c",&d);
    for(int i=n;i<n+n1;i++)
    {
        printf("Enter name of Student: ");
        scanf("%[^\n]",p[i].name);    //taking inputs so no need of * or -> as anyways need address
        printf("Enter roll number: ");
        scanf("%ld",p[i].roll);
        scanf("%c",&d);
        printf("Enter stream of student: ");
        scanf("%[^\n]",p[i].stream);
        scanf("%c",&d);
    }
    display(p,n+n1);
}
void display(Student *p,int n)                        //Printing student details
{
    printf("The Details Of The Students Are:\n");
    for(int i=0;i<n;i++)
    {
        printf("Student Name:%s\n",p[i].name); //string printing using pointer don't need any * or -> 
        printf("Roll No.:%ld\n",p->roll);     //structure so using member selection operator ->
        printf("Stream:%s\n",p[i].stream);
    }
}
