//WRONG
#include<stdio.h>
#include<ctype.h>
#include<math.h>
void main()
{
    //char arr[200],ch;
    int n,b,dec=0;
    printf("Enter number: ");
    scanf("%d",n);
    printf("Enter base for conversion: ");
    scanf("%d",&b);
    int x=n,m,i=0,j,c=0;
    /*for(int k=0;arr[k]!='\0';k++)
    {
        i++;
    }*/
    while(n>0)
    {
        if(b<16)
        {
            m=n%10;
            dec=dec+(m*pow(b,c));
        }
        /*else if(b==16)
        {
            m=arr[i];
            j=(int)m;
            dec=dec+(m*pow(16,c));
        }
        else
            j=0;*/
        c++;
        n=n/10;
    }
    /*if(j==0)
        printf("Conversion not possible");*/
    printf("\nNumber in decimal %d ",dec);
}
