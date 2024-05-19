#include<stdio.h>
long int fact(int);
void main()
{
	int n;
	printf("Enter a number");
	scanf("%d",&n);
	long int f=fact(n);
	printf("Factorial: %ld",f);
}
long int fact(int a)
{
	int f=1;
	for(int i=1;i<=a;i++)
	{
		f=f*i;
	}
	return f;
}
	