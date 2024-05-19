#include<stdio.h>
void main()
{
    int n,c=1;
    printf("Enter number of rows");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int k=1;k<=n-i;k++)
            printf(" ");
        for(int j=0;j<=i;j++)
        {
            if(j==0 || i==0)
                c=1;
            else 
                c=c*(i-j+1)/j;
            printf(" %d",c);
        }
        printf("\n");
    }
}