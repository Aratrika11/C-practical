#include<stdio.h>
int square(int);
void main()
{
    int n;
    printf("Enter the limit");
    scanf("%d",&n);
    printf("Square Series: ");
    for(int i=1;i<=n;i++)
        printf("%d ",square(i));
}
int square(int n)
{
    int sq=n*n;
    return sq;
}