//3. Generate a Magic square of order n.
#include<stdio.h>
void generate(int);
void main()
{
    int r,c;
    printf("Enter the number of rows: ");
    scanf("%d",&r);
    printf("Enter the number of columns: ");
    scanf("%d",&c);
    if(r==c)
    generate(r);
    else
    printf("Magic Square generation not possible");
}
void generate(int n)
{
    int ar[20][20];
    int i=n/2;
    int j=n-1;
    for(int v=1;v<=(n*n);v++)
    {
        if(i==(-1) && j<n)
        {
            i=n-1;
        }
        else if(j==n && i>-1)
        {
            j=0;
        }
        else if(i==(-1) && j==n)
        {
            i=0;
            j=n-2;
        }
        else if(ar[i][j]>=1 && ar[i][j]<=n*n)
        {
            i=i+1;
            j=j-2;
        }
        /*else
        {
            ar[i][j]=v;
            printf("%d %d %d \n",i,j,ar[i][j]);
        }*/
        ar[i][j]=v;
        i=i-1;
        j=j+1;
    }
    printf("MAGIC SQUARE\n");
    for(int k=0;k<n;k++)
    {
        for(int l=0;l<n;l++)
            printf("%d ",ar[k][l]);
        printf("\n");
    }
}