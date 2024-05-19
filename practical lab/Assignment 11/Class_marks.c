#include<stdio.h>
#include<string.h>
typedef struct
{
	int roll;
	int age;
	int marks;
	char name[50];
	char sex;
}honors;
void main()
{
	int n,c=0;
	char temp;     //dummy to store buffer value of scanf
	printf("Enter number of students");
	scanf("%d",&n);
	scanf("%c",&temp);
	honors stud[40];
	for(int i=0;i<n;i++)
	{
		printf("Enter name of student %d ",i+1);
		scanf("%[^\n]s",stud[i].name);
		printf("Enter roll of student %d ",i+1);
		scanf("%d",&stud[i].roll);
		printf("Enter age of student %d ",i+1);
		scanf("%d",&stud[i].age);
		printf("Enter marks of student %d ",i+1);
		scanf("%d",&stud[i].marks);
		printf("Enter sex of student %d ",i+1);
		scanf("%s",&stud[i].sex);
		scanf("%c",&temp);
	}
	for(int i=0;i<n;i++)
	{
		if(stud[i].age>=18)
		c=c+1;
	}
	printf("Eligible Voters = %d\n",c);
	int tm=stud[0].marks;
	int m=stud[0].sex;
	/*char na[50];
	strcpy(na,stud[0].name);*/
	for(int i=1;i<n;i++)
	{
		if(stud[i].marks>tm)
		{
			tm=stud[i].marks;
			m=i;
			/*if(stud[i].sex=='M');
			na=strcat("Mr.",stud[i].name);
			else
			na=strcat("Miss.",stud[i].name);*/
		}
	}
	if(stud[m].sex =='M')
	{
		printf("Highest Marks: %d\n",tm);
		printf("First Boy is Mr. %s",stud[m].name);
	}
	else
	{
		printf("Highest Marks: %d\n",tm);
		printf("First Girl is Miss. %s",stud[m].name);		
    }
}
