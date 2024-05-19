#include<stdio.h>
void sum(int,int,int ar[][20]);
void main()
{
	int r,c,sum1,sum2;
	int ar[20][20];
	printf("Enter number of rows and number of columns");
	scanf("%d %d",&r,&c);
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
    sum(r,c,ar);	
}
void sum(int row,int col,int ar[][20])
{
    int evens=0,odds=0;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(ar[i][j]%2==0)
            evens=evens+ar[i][j];
            else
            odds=odds+ar[i][j];
        }
    }
    printf("Sum of Even Elements: %d\n",evens);
    printf("Sum of Odd Elements: %d",odds);
}

	
				
	
	
