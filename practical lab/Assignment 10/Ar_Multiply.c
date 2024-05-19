//Input two matrices of any order and multiply them.
#include<stdio.h>
void multi(int [][20],int,int,int [][20],int,int);
void main()
{
    int r1,c1,r2,c2;
    int ar[20][20],arr[20][20];
    printf("Enter number of rows for two matrices: ");
    scanf("%d %d",&r1,&r2);
    printf("Enter number of coloumns for two matrices: ");
    scanf("%d %d",&c1,&c2);
    if(c1==r2)
    {
    printf("Enter first matrix elements");
    for(int i=0;i<r1;i++)
        for(int j=0;j<c1;j++)
            scanf("%d",&ar[i][j]);
    printf("MATRIX 1: \n");
	for(int i=0;i<r1;i++)
	{
		for(int j=0;j<c1;j++)
			printf("%d ",ar[i][j]);
		printf("\n");
    }
    printf("Enter elements for matrix 2");
    for(int i=0;i<r2;i++)
	{
		for(int j=0;j<c2;j++)
			scanf("%d",&arr[i][j]);
	}
	printf("MATRIX 2: \n");
	for(int i=0;i<r2;i++)
	{
		for(int j=0;j<c2;j++)
			printf("%d ",arr[i][j]);
		printf("\n");
    }
    multi(ar,r1,c1,arr,r2,c2);
    }       //end of if block
    else
        printf("multiplication not possible");    
}
void multi(int ar[][20],int r1,int c1,int ar2[][20],int r2,int c2)
{
    int i,j,k;
    int m[20][20];
     for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
            m[i][j]=0;
    }
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            for(k=0;k<c1;k++)
                m[i][j]=m[i][j]+(ar[i][k]*ar2[k][j]);
        }    //end of 2nd loop
    }       //end of 1st loop
    printf("AFTER MULTIPLICATION \n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
            printf("%d ",m[i][j]);
        printf("\n");
    }
}