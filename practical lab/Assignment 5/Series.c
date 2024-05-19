#include<stdio.h>
#include<math.h>
int fact(int);
void main()
{
    int n;
    double sum=0,p,t;
    printf("Enter no. terms");
    scanf("%d",&n);
    double x;
    printf("Enter value of x");
    scanf("%lf",&x);
    int k=0;   //to keep count of number of terms
    for(int i=1;i<=2*n;i+=2) 
    {
        p=pow(x,i);
        t=pow(-1.0,k)*(p/fact(i));
        sum=sum+t; 
        k=k+1; 
    }
    printf("Sum: %lf",sum);
}
int fact(int n)
{
    int f=1;
    for(int i=1;i<=n;i++)
        f=f*i;
    return f;
}