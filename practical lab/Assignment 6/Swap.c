#include<stdio.h>
void swap(int *,int *);
void main()
{
    int a,b;
    printf("Enter two numbers");
    scanf("%d,%d",&a,&b);
    swap(&a,&b);
}
void swap(int *m,int *n)
{
    *m=*m+*n;
    *n=*m-*n;
    *m=*m-*n;
    printf("After Swapping \n");
    printf("First num= %d Second num= %d ",*m,*n);
}