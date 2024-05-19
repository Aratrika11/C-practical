#include<stdio.h>
#include<math.h>
int convert(int);
int main()
{
    long int n;
    int dec;
    printf("Enter a binary number : ");
    scanf("%d", &n);
    dec=convert(n);
    printf("%ld in binary =  %d in decimal", n, dec);
    return 0;
}
int convert(int n)
{
    int dec=0;
    int rem, i=0;
    while(n!=0)
    {
        rem=n%10;
        n/=10;
        dec=dec+(rem*pow(2, i));
        i++;
    }
    return dec;
}