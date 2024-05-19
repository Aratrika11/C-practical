#include<stdio.h>
void main()
{
	int a,b,sum,diff,prod;
	float div;
	printf("Enter two numbers");
	scanf("%d,%d",&a,&b);
	printf("Enter 1 for Addition");
        printf(" \nEnter 2 for Subtraction");
	printf(" \nEnter 3 for Multiplication");
	printf(" \nEnter 4 for Division");
	int n;
	scanf("%d",&n);
	switch(n)
	{
			case 1:
			       sum=a+b;
			       printf("%d",sum);
			       break;
			case 2:
			       diff=a-b;
			       printf("%d",diff);
			       break;
			case 3:
			       prod=a*b;
			       printf("%d",prod);
			       break;
			case 4:
			       div=a/b;
			       printf("%f",div);
			       break;
			default:printf("Invalid");
	}
}
			       
	
