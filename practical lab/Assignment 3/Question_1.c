#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter two numbers");
	scanf("%d,%d",&a,&b);
	a=a^b;
	b=a^b;
	a=a^b;
	printf("New 1st number %d",a);
	printf(" \nNew 2nd number %d",b);
	return 0;
}
