#include<stdio.h>
int sum(int *,int *);
void prod(int *,int *);
void main()
{
    int a,b;
    printf("Enter two numbers");
    scanf("%d,%d",&a,&b);
    int s= sum(&a,&b);
    printf("Sum of %d and %d = %d ",a,b,s);
    prod(&a,&b);
}
int sum(int *n,int *m)
{
    int c=*n+*m;
    return c;
}
void prod(int *n,int *m)
{
    int p=*n**m;
    printf("\nProduct of %d and %d =%d ",*n,*m,p);
}