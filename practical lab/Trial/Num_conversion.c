#include<stdio.h>
#include<math.h>
int dec_bin(int);
void main()
{
    int n;
    printf("Enter a decimal number ");
    scanf("%d",&n);
    int bin=dec_bin(n);
    printf("%d in decimal = %d in binary",n,bin);
}
int dec_bin(int num)
{
    int bin=0,k=num,c=0;
    while(k>0)
    {
        int b=k%2;
        bin=bin+(b*pow(10,c));
        c++;
        k=k/2;
    }
    return bin;
} 