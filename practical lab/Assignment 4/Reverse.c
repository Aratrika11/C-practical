#include<stdio.h>
void main()
{
	int n;
	printf("Enter a number");
	scanf("%d",&n);
	int a=n;
	int d,rev;
	rev=0;
	while(a>0)
	{
		d=a%10;
		rev=rev*10+d;
		a=a/10;
	} 
	printf("Reverse of %d is %d ",n,rev);
}