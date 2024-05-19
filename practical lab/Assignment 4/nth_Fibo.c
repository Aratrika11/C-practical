#include<stdio.h>
void main()
{
    int n,a,b,s=0;
    printf("Enter number of terms");
    scanf("%d",&n);
    a=0;
    b=1;
    printf("%d",a);
    printf(" %d",b);
    int i=1;
    while(i<=n-2)
    {
        s=a+b;
        printf(" %d",s);
        a=b;
        b=s;
        i=i+1;
    }
}