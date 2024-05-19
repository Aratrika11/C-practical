#include<stdio.h>
void check(int ,int,int ar[][20]);
void main()
{
	int r,c;
	int ar[20][20];
	printf("Enter number of rows and columns");
	scanf("%d %d",&r,&c);
	printf("Enter array elements");
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
			scanf("%d",&ar[i][j]);
	}
	printf("ARRAY: \n");
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
			printf("%d ",ar[i][j]);
		printf("\n");
	}
	check(r,c,ar);
}
void check(int m,int n,int ar[][20])
{
	int z=0,c=0;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(ar[i][j]==0)
				z=z+1;
			else
			    c=c+1;
		}
	}
	if(z>=c)
	printf("It is a Sparse Matrix");
	else
	printf("It is not a Sparse Matrix");
}
