#include<stdio.h>
void main()
{
    int n,c=0;
    printf("Enter a number");
    scanf("%d",&n);
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
            c=c+1;
    }
    if(c==1)
        printf("%d is a Prime number",n);
    else
        printf("%d is not a Prime number",n);
}