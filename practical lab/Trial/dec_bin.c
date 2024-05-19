#include<stdio.h>
#include<math.h>
long int convert(int);
int main()
{
    int n;
    int bin;
    printf("Enter a decimal number : ");
    scanf("%d", &n);
    bin=convert(n);
    printf("%d in decimal =  %ld in binary", n, bin);
    return 0;
}
long int convert(int n)
{
    long int bin=0;
    int rem, i=1;
    while(n!=0)
    {
        rem=n%2;
        n=n/2;
        bin=bin+(rem*i);
        i=i*10;
    }
    return bin;
}
