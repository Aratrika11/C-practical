#include<stdio.h>
int fibo();
int prime();
int main()
{
	int n,i;
	int a[50];
	printf("Enter number of elements");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
	        //printf("Hello");
	        if(i==1)
	        a[i]=0;
	        else if(i==3)
	        a[i]=1;
		else if(i%2!=0)
		 {
			a[i]=fibo();
			//printf("Hello");
		 }
		else
		a[i]=prime();
	}
	printf("ARRAY FIBO-PRIME: [ ");
	for(i=1;i<n;i++)
		printf("%d ",a[i]);
	printf("]");
	return 0;
}
int fibo()
{
	static int f1=0,f2=1;
	int c=0;
	c=f1+f2;
	f1=f2;
	f2=c;
	return c;
}
int prime()
{
	int c=0,m;
	static int k=2;
	while(k>0) 
	{
	    c=0;
		for(int i=1;i<k;i++)
		{
			if(k%i==0)
			c=c+1;
		}
		if(c==1)
		{
			m=k;
			k=k+1;
			break;
		}
		else
		k=k+1;
	}
	return m;
}
	
