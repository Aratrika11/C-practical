#include<stdio.h>
void transpose(int a[][20],int,int);
void main()
{
	int r,c;
	int ar[20][20];
	printf("Enter number of rows");
	scanf("%d",&r);
	printf("Enter number of coloumns");
	scanf("%d",&c);
	printf("Enter array elements");
	for(int i=0;i<r;i++)
		for(int j=0;j<c;j++)
			scanf("%d",&ar[i][j]);
	printf("The Matrix \n");
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
			printf("%d ",ar[i][j]);
		printf("\n");
	}
	transpose(ar,r,c);
}
void transpose(int a[][20],int r,int c)
{
	int b[20][20],*p;
    p=a[0];
    printf("Transpose \n");
	for(int i=0;i<c;i++)
    {
		for(int j=0;j<r;j++)
            printf("%d ",(*(p+(j*20)+i))); //ok did'nt understand but ok writing original initializing size 20
		printf("\n");
    }
}	