#include<stdio.h>
int isPrime(int);
void main()
{
	int n,a,b,s;
	printf("Enter no. terms");
	scanf("%d",&n);
	a=1;
	b=1;
	int i=4;
	while(i<=n)
	{
		s=a+b;
		a=b;
		b=s;
		if(isPrime(s)==1)
	        printf("%d ",s);
	        i=i+1;
	}
}
int isPrime(int a)
{
	int c=0;
	for( int i=1;i<a;i++)
	{
		if(a%i==0)
		c=c+1;
	}
	if(c==1)
        return 1;
	else
	return 0;
}
