#include<stdio.h>
void main()
{
    int n,a,b,s=0;
    printf("Enter the last term");
    scanf("%d",&n);
    a=0;
    b=1;
    printf("%d",a);
    printf(" %d",b);
    s=a+b;
    while(s<=n)
    {
        printf(" %d",s);
        a=b;
        b=s;
        s=a+b;
    }
}