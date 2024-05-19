#include<stdio.h>
typedef struct 
{
    int id;
    char name[100];
    int sal;
} employee;
void main()
{
   employee det[10];
   int n;char c;
   printf("Enter number of employees");
   scanf("%d",&n);
   scanf("%c",&c);
   for(int i=0;i<n;i++)
   {
    printf("Enter employee id: ");
    scanf("%d",&det[i].id);
    scanf("%c",&c);
    printf("Enter employee name: ");
    scanf("%[^\n]",det[i].name);
    printf("Enter employee salary: ");
    scanf("%d",&det[i].sal);
   } 
   printf("Employee Details: \n");
   for(int i=0;i<n;i++)
   {
    printf("Employee id: %d \n",det[i].id);
    printf("Employee name %s \n",det[i].name);
    printf("Employee salary: %d \n",det[i].sal);
   }
}