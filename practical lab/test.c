#include<stdio.h>
void sparse(int ar[][20], int, int); 
void main()
{
	int ar[20][20], a, b;
	int i, j;
	printf("Enter the number of rows: ");
	scanf("%d", &a);
	printf("Enter the number of columns: ");
	scanf("%d", &b);
	printf("Enter the elements of the matrix : ");
	for(i=0; i<a; i++)
		for(j=0; j<b; j++)
			scanf("%d", &ar[i][j]);
	printf("The matrix -\n");
	for(i=0; i<a; i++)
	{
		printf("\n");
		for(j=0; j<b; j++)
			printf("%d ", ar[i][j]);
	}
	printf("\n");
	sparse(ar, a, b);
}
void sparse(int ar[][20], int a, int b)
{
	int c1=0, c2=0;
	for(int i=0; i<a; i++)
	{
		for(int j=0; j<b; j++)
		{
			if(ar[i][j]==0)
				c1=c1+1;
			else
				c2=c2+1;
		}
	}
	if(c1>=c2)
		printf("This is a sparse matrix");
	else
		printf("This is not a sparse matrix");
}