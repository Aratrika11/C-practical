#include<stdio.h>
void dupremove(int ar[],int);
void main()
{
	int n;
	int ar[50];
	printf("Enter number of elements");
	scanf("%d",&n);
	printf("Enter array elements");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
	}
	printf("ARRAY: [ ");
	for(int i=0;i<n;i++)
		printf("%d ",ar[i]);
	printf("]\n");
	dupremove(ar,n);
}
void dupremove(int ar[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(ar[i]==ar[j])
			{
			 	for(int k=j;k<n-1;k++)
			 		ar[k]=ar[k+1];
			 	n--;
			 	j--;
			 }
		}
	}
	printf(" After removing the duplicate elements ARRAY: \n[ ");
	for(int i=0;i<n;i++)
		printf("%d ",ar[i]);
	printf("]");
}
	
			        			
