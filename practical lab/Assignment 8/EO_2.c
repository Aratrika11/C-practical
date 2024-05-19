#include<stdio.h>
int even(int);
int odd(int);
void main()
{
	int r,c,sum1,sum2;
	int ar[20][20];
	printf("Enter number of rows and number of columns");
	scanf("%d ,%d",&r,&c);
	printf("Enter array elements");
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			scanf("%d",&ar[i][j]);
		}
	}
	printf("ARRAY: \n");
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			printf("%d ",ar[i][j]);
		}
		printf("\n");
	}
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			if(ar[i][j]%2==0)
			{
				sum1=even(ar[i][j]);
			}
			else
			sum2=odd(ar[i][j]);
		}
	}
	printf("Sum of even terms: %d \n",sum1);
	printf("Sum of odd terms: %d",sum2);
}
int even(int n)
{
	static int sum=0;
	sum=sum+n;
	return sum;
}
int odd(int m)
{
	static int s=0;
	s=s+m;
	return s;
}

	
				
	
	
