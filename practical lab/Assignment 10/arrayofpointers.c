/*3. Input an array of n elements into an array A[ ]. Create an array pointers *B[ ], whose each element is a pointer to the corresponding 
elements of A[ ]. Find the sum of the elements of the array A[ ] using the array of pointer B[ ].*/
#include<stdio.h>
void sum(int [],int);
void main()
{
    int A[20];
    int n;
    printf("Enter number of elements");
    scanf("%d",&n);
    printf("Enter Array elements \n");
    for(int i=0;i<n;i++)
        scanf("%d",&A[i]);
    printf("ARRAY: [");
    for(int i=0;i<n;i++)
        printf("%d ",A[i]);
    printf("]\n");
    sum(A,n);
}
void sum(int A[],int l)
{
    //int *p=A;
    int s=0;
    int *B[30];
    for(int i=0;i<l;i++)
    {
        B[i]=&A[i];     //or p+i
    }
    for(int i=0;i<l;i++)
        s=s+(*B[i]);
    printf("Sum of elements: %d",s);
}
