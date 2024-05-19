#include<stdio.h>

int main()
{
    int n,a,i,j,s,k,flag=1,count=1;
    printf("Enter an even number greater than 2 : ");
    scanf("%d",&n);
    printf("After decomposing the prime numbers are :\n");
    for(i=2;i<=n/2;i++)
    {
        flag=1;
        for(j=2;j<i;++j)
        {
            if(i%j==0)
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
        {
            s=i;
            a=n-s;
            count=1;
            for(k=2;k<a;k++)
            {
                if(a%k==0)
                {
                    count=0;
                    break;
                }
            }
            if(count==1)
                printf("%d and %d.\n",s,a);
        }
    }
    return 0;        
}