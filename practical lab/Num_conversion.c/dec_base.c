#include<stdio.h>
#include<ctype.h>
void main()
{
    char arr[200];
    int n,b;
    printf("Enter a decimal number: ");
    scanf("%d",&n);
    printf("Enter base for conversion: ");
    scanf("%d",&b);
    int x=n,m,i=0,c=0;
    while(n>0)
    {
        if(b<16)
        {
            m=n%b;
            arr[i]=m;
        }
        else if(b==16)
        {
            m=n%16;
            switch(m)
            {
            case 10: arr[i]='A';
                     break;
            case 11: arr[i]='B';
                     break;
            case 12: arr[i]='C';
                     break;
            case 13: arr[i]='D';
                     break;
            case 14: arr[i]='E';
                     break;
            case 15: arr[i]='F';
                     break;
            default: arr[i]=m;
            }
        }
        else
            printf("Conversion not possible");
        i++;c++;
        n=n/b;
    }
    printf("Number in base %d : ",b);
    for(i=c-1;i>=0;i--)
    {
        if(isalpha(arr[i]))
            printf("%c",arr[i]);
        else
            printf("%d",arr[i]);
    }

}