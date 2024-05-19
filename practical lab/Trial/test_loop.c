#include<stdio.h>
void main()
{
    int sum;
    for(int i=1;i<5;i++)
    {
        sum=0;
        for(int j=1;j<=4;j++)
        {
            if(j==3)
                break;
            sum=sum+j;
        }
        printf("%d",sum);
    }
    for(int i=1;i<10;i++)
    {
        if(i%2==0)
            continue;
        printf("%d",i);
    }
}