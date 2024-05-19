#include<stdio.h>
int prime(int);
void main()
{
    int n,a,s;
    printf("Enter an even number greater than 2 : ");
    scanf("%d",&n);
    for(int i=2;i<=n/2;i++)
    {
        s=i;
        a=n-s;
        if(prime(a)==1 && prime(s)==1)
        {
            printf("The number decomposes to %d and %d\n",a,s);
        }
    }      
}
int prime(int a)
{
    int c=0;
    for(int i=1;i<a;i++)
    {
        if(a%i==0)
            c=c+1;
    }
    if(c==1)
        return 1;
    else
        return 0;
}