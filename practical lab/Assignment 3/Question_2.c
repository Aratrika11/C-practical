#include<stdio.h>
int main()
{
	int n,c=0,p=0;
	printf("Enter a number in the form of its memory representation");
	scanf("%d",&n);
	while(n>0)
	{
		if(n&1)
		{
			c=c+1;
			n=n>>1;
		}
		else
		{
			p=p+1;
			n=n>>1;
		}
	}
	printf("The number of 0's = %d",p);
	printf(" \nThe number of 1's = %d",c);
	return 0;
}
