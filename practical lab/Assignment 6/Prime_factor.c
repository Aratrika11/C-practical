#include<stdio.h>
int prime(int);
void main()
{
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    printf("Prime Factors of %d : \n",n);
    for(int i=1;i<=n;i++)
    {
        if(n%i==0 && prime(i)==1)
        printf("%d\n",i);
    }
}
int prime(int a)
{
    int c=0;
    for(int i=1;i<=a/2;i++)
    {
        if(a%i==0)
        c=c+1;
    }
    if(c==1)
    return 1;
    else
    return 0;
}