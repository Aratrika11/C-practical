#include<stdio.h>
#include<ctype.h>
void main()
{
    char arr[200];
    int n;
    printf("Enter a decimal number: ");
    scanf("%d",&n);
    int x=n,m,i=0,c=0;
    while(n>0)
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
        i++;c++;
        n=n/16;
    }
    printf("Hexa : ");
    for(i=c-1;i>=0;i--)
    {
        if(isalpha(arr[i]))
            printf("%c",arr[i]);
        else
            printf("%d",arr[i]);
    }
}