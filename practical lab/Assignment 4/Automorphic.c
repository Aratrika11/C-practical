#include<stdio.h>
void main()
{
    int n,c=0,sq,p=1,r;
    printf("Enter a number",&n);
    scanf("%d",&n);
    int a=n;
    while(a>0)
    {
        a=a/10;
        c=c+1;
    }
    sq=n*n;
    printf(" Square: %d",sq);
    for(int i=1;i<=c;i++)
        p=10*p;
    r=sq%p;
    if(r==n)
        printf("\n %d is an Automorphic Number",n);
    else 
        printf("\n %d is not an Automorphic Number",n);
}