//2. Find the sum of the elements of an array using an user defined function int sum(int*,int). 

#include<stdio.h>
int sum(int *,int );
void main()
{
	int n;
	int ar[20];
	printf("Enter number of elements");
	scanf("%d",&n);
	printf("Enter array elements");
	for(int i=0;i<n;i++)
		scanf("%d",&ar[i]);
	printf("Array: [ ");
	for(int i=0;i<n;i++)
		printf("%d ",ar[i]);
	printf("]\n");
	int s=sum(ar,n);
	printf("Sum of array elements : %d",s);
}
int sum(int *p, int s)
{
	int sum=0;
	for(int i=0;i<s;i++)
		sum=sum+(*(p+i));
	return sum;
}
		
