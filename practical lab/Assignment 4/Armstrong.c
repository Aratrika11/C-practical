#include<stdio.h>
void main()
{
    int n,d,s=0,p=1,c=0;
    printf("Enter a number");
    scanf("%d",&n);
    int a=n;
    int k=n;
    while(k>0)
    {
        k=k/10;
        c=c+1;
    }
    while(a>0)
    {
        d=a%10;
        for(int i=1;i<=c;i++)
        {
            p=d*p;
        } 
        s=s+p;
        a=a/10;
        p=1;
    }
    if(s==n)
        printf("%d is an Armstrong Number",n);
    else
        printf("%d is not an Armstrong Number",n);
}