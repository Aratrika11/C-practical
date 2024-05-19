#include<stdio.h>
void main()
{
	int n;
	printf("Enter a number");
	scanf("%d",&n);
	int d,s;
	d=s=0;
	while(n>0)
	{
		d=n%10;
		s=s+d;
		n=n/10;
	}
	printf("Sum: %d",s);
}