#include<stdio.h>
void main()
{
    int a;
    printf("Enter number of lines");
    scanf("%d",&a);
    int n=a/2;
    for(int i=n;i>=1;i--)
    {
        for(int k=n;k>i;k--)
            printf(" ");
        for(int j=1;j<=2*i-1 ;j++)
            printf("*");
        printf("\n");
    }
    for(int i=2; i<=n;i++)
    {
        for(int k=n;k>i;k--)
            printf(" ");
        for(int j=1;j<=2*i-1 ;j++)
            printf("*");
        printf("\n");
    }
}