//finding sum of first n prime numbers using a user defined function for prime check.
#include<stdio.h>
int prime(int);
void main()
{
    int n,sum=0,c=0;
    printf("Enter number of terms");
    scanf("%d",&n);
    printf("First %d Prime numbers ",n);
    int i=1;
    while(i>0)
    {
        if(prime(i)==1)
        {
            printf(" %d",i);
            sum=sum+i;
            c=c+1;
        }
        i++;
        if(c==n)
        break;
    }
    printf("\nSum of first %d prime numbers: %d  ",n,sum);
}
int prime(int a)
{
    int f=0;
    for(int i=1;i<=a/2;i++)
        if(a%i==0)
        f=f+1;
    if(f==1)
    return 1;
    else
    return 0;
}