#include<stdio.h>
void main()
{
	int a,b,c,z;
	printf("Enter 3 numbers");
	scanf("%d,%d,%d",&a,&b,&c);
	z=(a>b)?((a>c)?a:c):((b>c)?b:c);
	printf("Maximum Number %d",z);
}
