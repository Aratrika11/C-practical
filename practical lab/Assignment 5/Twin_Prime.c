#include<stdio.h>
int isPrime(int);
void main()
{
	int n,s;
	printf("Enter limit");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		s=i-2;
		if(isPrime(i)==1 && isPrime(s)==1)
		printf("%d,%d is Twin Prime \n",s,i);
	}
}
int isPrime(int a)
{
	int c=0;
	for(int i=1;i<a;i++)
	{
		if(a%i==0)
		c=c+1;
	}
	if(c==1)
	return 1;
	else
	return 0;
}
	