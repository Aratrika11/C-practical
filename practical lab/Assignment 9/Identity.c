#include<stdio.h>
void main()
{
    int n, ar[50][50];
    printf("Enter the size of the matrix : ");
    scanf("%d", &n);
    printf("\nNumber of elements of the matrix : %d", n*n);
    printf("\nEnter the elements of the matrix : ");
    int i, j;
    int flag=0;
    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
            scanf("%d", &ar[i][j]);
    printf("The matrix - \n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%d ", ar[i][j]);
        }
        printf("\n");
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(i==j && ar[i][j]!=1)
            {
                flag=1;
                break;
            }
            else if(i!=j && ar[i][j]!=0)
            {
                flag=1;
                break;
            }
        }
    }
    if(flag==0)
        printf("The matrix is an identity matrix");
    else
        printf("The matrix is not an identity matrix");
}