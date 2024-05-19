#include<stdio.h>
int func(int [][20],int,int);
void main()
{
    int r,c, ar[20][20];
    printf("Enter number of rows of array ");
    scanf("%d",&r);
    printf("Enter number of columns");
    scanf("%d",&c);
    int *p=func(ar,r,c);
    printf("Array: \n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d ",*(p+(i*20)+j));
        }
        printf("\n");
    }
}
int func(int ar[][20],int r,int c)
{
    printf("ENter array elements ");
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            scanf("%d",&ar[i][j]);
    return ar[0];
}